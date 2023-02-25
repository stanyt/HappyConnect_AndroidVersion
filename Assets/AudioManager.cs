using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Audio;

public class AudioManager : Singleton<AudioManager>
{
    public AudioClip SwitchClip, DownClip,ConnectClip;
    public AudioSource BGMAudioSource, SoundEffectsAudioSource;
    AudioMixer mixer;
    private void Start()
    {
        mixer = BGMAudioSource.outputAudioMixerGroup.audioMixer;
    }
    public void PlayBGM()
    {
        BGMAudioSource.Play();
    }
    public void StopPlayBGM()
    {
        BGMAudioSource.Pause();
    }
    public void PlayDownEffect()
    {
        SoundEffectsAudioSource.PlayOneShot(DownClip);
    }
    public void PlayConnectEffect()
    {
        SoundEffectsAudioSource.PlayOneShot(ConnectClip);
    }
    public void PlaySwitchEffect()
    {
        SoundEffectsAudioSource.PlayOneShot(SwitchClip);
    }

    public void ChangeEffectVolume(float x)
    {
        mixer.SetFloat("Effect Volume", x);
    }
    public void ChangeBGMVolume(float x)
    {
        mixer.SetFloat("BGM Volume", x);
    }
    public void ChangeMainVolume(float x)
    {
        mixer.SetFloat("MasterVolume", x);
    }
}
