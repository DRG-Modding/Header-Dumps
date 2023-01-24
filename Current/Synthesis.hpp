#ifndef UE4SS_SDK_Synthesis_HPP
#define UE4SS_SDK_Synthesis_HPP

#include "Synthesis_enums.hpp"

struct FDynamicsBandSettings
{
    float CrossoverTopFrequency;
    float AttackTimeMsec;
    float ReleaseTimeMsec;
    float ThresholdDb;
    float Ratio;
    float KneeBandwidthDb;
    float InputGainDb;
    float OutputGainDb;

};

struct FEpicSynth1Patch
{
    ESynth1PatchSource PatchSource;
    TArray<FSynth1PatchCable> PatchCables;

};

struct FModularSynthPreset : public FTableRowBase
{
    uint8 bEnablePolyphony;
    ESynth1OscType Osc1Type;
    float Osc1Gain;
    float Osc1Octave;
    float Osc1Semitones;
    float Osc1Cents;
    float Osc1PulseWidth;
    ESynth1OscType Osc2Type;
    float Osc2Gain;
    float Osc2Octave;
    float Osc2Semitones;
    float Osc2Cents;
    float Osc2PulseWidth;
    float Portamento;
    uint8 bEnableUnison;
    uint8 bEnableOscillatorSync;
    float Spread;
    float Pan;
    float LFO1Frequency;
    float LFO1Gain;
    ESynthLFOType LFO1Type;
    ESynthLFOMode LFO1Mode;
    ESynthLFOPatchType LFO1PatchType;
    float LFO2Frequency;
    float LFO2Gain;
    ESynthLFOType LFO2Type;
    ESynthLFOMode LFO2Mode;
    ESynthLFOPatchType LFO2PatchType;
    float GainDb;
    float AttackTime;
    float DecayTime;
    float SustainGain;
    float ReleaseTime;
    ESynthModEnvPatch ModEnvPatchType;
    ESynthModEnvBiasPatch ModEnvBiasPatchType;
    uint8 bInvertModulationEnvelope;
    uint8 bInvertModulationEnvelopeBias;
    float ModulationEnvelopeDepth;
    float ModulationEnvelopeAttackTime;
    float ModulationEnvelopeDecayTime;
    float ModulationEnvelopeSustainGain;
    float ModulationEnvelopeReleaseTime;
    uint8 bLegato;
    uint8 bRetrigger;
    float FilterFrequency;
    float FilterQ;
    ESynthFilterType FilterType;
    ESynthFilterAlgorithm FilterAlgorithm;
    uint8 bStereoDelayEnabled;
    ESynthStereoDelayMode StereoDelayMode;
    float StereoDelayTime;
    float StereoDelayFeedback;
    float StereoDelayWetlevel;
    float StereoDelayRatio;
    uint8 bChorusEnabled;
    float ChorusDepth;
    float ChorusFeedback;
    float ChorusFrequency;
    TArray<FEpicSynth1Patch> Patches;

};

struct FModularSynthPresetBankEntry
{
    FString PresetName;
    FModularSynthPreset Preset;

};

struct FPatchId
{
    int32 ID;

};

struct FSourceEffectBitCrusherBaseSettings
{
    float SampleRate;
    float BitDepth;

};

struct FSourceEffectBitCrusherSettings
{
    float CrushedSampleRate;
    FSoundModulationDestinationSettings SampleRateModulation;
    float CrushedBits;
    FSoundModulationDestinationSettings BitModulation;

};

struct FSourceEffectChorusBaseSettings
{
    float Depth;
    float Frequency;
    float Feedback;
    float WetLevel;
    float DryLevel;
    float Spread;

};

struct FSourceEffectChorusSettings
{
    float Depth;
    float Frequency;
    float Feedback;
    float WetLevel;
    float DryLevel;
    float Spread;
    FSoundModulationDestinationSettings DepthModulation;
    FSoundModulationDestinationSettings FrequencyModulation;
    FSoundModulationDestinationSettings FeedbackModulation;
    FSoundModulationDestinationSettings WetModulation;
    FSoundModulationDestinationSettings DryModulation;
    FSoundModulationDestinationSettings SpreadModulation;

};

struct FSourceEffectDynamicsProcessorSettings
{
    ESourceEffectDynamicsProcessorType DynamicsProcessorType;
    ESourceEffectDynamicsPeakMode PeakMode;
    float LookAheadMsec;
    float AttackTimeMsec;
    float ReleaseTimeMsec;
    float ThresholdDb;
    float Ratio;
    float KneeBandwidthDb;
    float InputGainDb;
    float OutputGainDb;
    uint8 bStereoLinked;
    uint8 bAnalogMode;

};

struct FSourceEffectEQBand
{
    float Frequency;
    float Bandwidth;
    float GainDb;
    uint8 bEnabled;

};

struct FSourceEffectEQSettings
{
    TArray<FSourceEffectEQBand> EQBands;

};

struct FSourceEffectEnvelopeFollowerSettings
{
    float AttackTime;
    float ReleaseTime;
    EEnvelopeFollowerPeakMode PeakMode;
    bool bIsAnalogMode;

};

struct FSourceEffectFilterAudioBusModulationSettings
{
    class UAudioBus* AudioBus;
    int32 EnvelopeFollowerAttackTimeMsec;
    int32 EnvelopeFollowerReleaseTimeMsec;
    float EnvelopeGainMultiplier;
    ESourceEffectFilterParam FilterParam;
    float MinFrequencyModulation;
    float MaxFrequencyModulation;
    float MinResonanceModulation;
    float MaxResonanceModulation;

};

struct FSourceEffectFilterSettings
{
    ESourceEffectFilterCircuit FilterCircuit;
    ESourceEffectFilterType FilterType;
    float CutoffFrequency;
    float FilterQ;
    TArray<FSourceEffectFilterAudioBusModulationSettings> AudioBusModulation;

};

struct FSourceEffectFoldbackDistortionSettings
{
    float InputGainDb;
    float ThresholdDb;
    float OutputGainDb;

};

struct FSourceEffectMidSideSpreaderSettings
{
    float SpreadAmount;
    EStereoChannelMode InputMode;
    EStereoChannelMode OutputMode;
    bool bEqualPower;

};

struct FSourceEffectPannerSettings
{
    float Spread;
    float Pan;

};

struct FSourceEffectPhaserSettings
{
    float WetLevel;
    float Frequency;
    float Feedback;
    EPhaserLFOType LFOType;
    bool UseQuadraturePhase;

};

struct FSourceEffectRingModulationSettings
{
    ERingModulatorTypeSourceEffect ModulatorType;
    float Frequency;
    float Depth;
    float DryLevel;
    float WetLevel;
    class UAudioBus* AudioBusModulator;

};

struct FSourceEffectSimpleDelaySettings
{
    float SpeedOfSound;
    float DelayAmount;
    float DryAmount;
    float WetAmount;
    float Feedback;
    uint8 bDelayBasedOnDistance;

};

struct FSourceEffectStereoDelaySettings
{
    EStereoDelaySourceEffect DelayMode;
    float DelayTimeMsec;
    float Feedback;
    float DelayRatio;
    float WetLevel;
    float DryLevel;
    bool bFilterEnabled;
    EStereoDelayFiltertype FilterType;
    float FilterFrequency;
    float FilterQ;

};

struct FSourceEffectWaveShaperSettings
{
    float Amount;
    float OutputGainDb;

};

struct FSubmixEffectConvolutionReverbSettings
{
    float NormalizationVolumeDb;
    bool bBypass;
    bool bMixInputChannelFormatToImpulseResponseFormat;
    bool bMixReverbOutputToOutputChannelFormat;
    float SurroundRearChannelBleedDb;
    bool bInvertRearChannelBleedPhase;
    bool bSurroundRearChannelFlip;
    float SurroundRearChannelBleedAmount;
    class UAudioImpulseResponse* ImpulseResponse;
    bool AllowHArdwareAcceleration;

};

struct FSubmixEffectDelaySettings
{
    float MaximumDelayLength;
    float InterpolationTime;
    float DelayLength;

};

struct FSubmixEffectFilterSettings
{
    ESubmixFilterType FilterType;
    ESubmixFilterAlgorithm FilterAlgorithm;
    float FilterFrequency;
    float FilterQ;

};

struct FSubmixEffectFlexiverbSettings
{
    float PreDelay;
    float DecayTime;
    float RoomDampening;
    int32 Complexity;

};

struct FSubmixEffectMultibandCompressorSettings
{
    ESubmixEffectDynamicsProcessorType DynamicsProcessorType;
    ESubmixEffectDynamicsPeakMode PeakMode;
    float LookAheadMsec;
    bool bLinkChannels;
    bool bAnalogMode;
    bool bFourPole;
    TArray<FDynamicsBandSettings> Bands;

};

struct FSubmixEffectStereoDelaySettings
{
    EStereoDelaySourceEffect DelayMode;
    float DelayTimeMsec;
    float Feedback;
    float DelayRatio;
    float WetLevel;
    float DryLevel;
    bool bFilterEnabled;
    EStereoDelayFiltertype FilterType;
    float FilterFrequency;
    float FilterQ;

};

struct FSubmixEffectTapDelaySettings
{
    float MaximumDelayLength;
    float InterpolationTime;
    TArray<FTapDelayInfo> Taps;

};

struct FSynth1PatchCable
{
    float Depth;
    ESynth1PatchDestination Destination;

};

struct FSynth2DSliderStyle : public FSlateWidgetStyle
{
    FSlateBrush NormalThumbImage;
    FSlateBrush DisabledThumbImage;
    FSlateBrush NormalBarImage;
    FSlateBrush DisabledBarImage;
    FSlateBrush BackgroundImage;
    float BarThickness;

};

struct FSynthKnobStyle : public FSlateWidgetStyle
{
    FSlateBrush LargeKnob;
    FSlateBrush LargeKnobOverlay;
    FSlateBrush MediumKnob;
    FSlateBrush MediumKnobOverlay;
    float MinValueAngle;
    float MaxValueAngle;
    ESynthKnobSize KnobSize;

};

struct FSynthSlateStyle : public FSlateWidgetStyle
{
    ESynthSlateSizeType SizeType;
    ESynthSlateColorStyle ColorStyle;

};

struct FTapDelayInfo
{
    ETapLineMode TapLineMode;
    float DelayLength;
    float Gain;
    int32 OutputChannel;
    float PanInDegrees;
    int32 TapId;

};

class UAudioImpulseResponse : public UObject
{
    TArray<float> ImpulseResponse;
    int32 NumChannels;
    int32 SampleRate;
    float NormalizationVolumeDb;
    bool bTrueStereo;
    TArray<float> IRData;

};

class UEnvelopeFollowerListener : public UActorComponent
{
    FEnvelopeFollowerListenerOnEnvelopeFollowerUpdate OnEnvelopeFollowerUpdate;
    void OnEnvelopeFollowerUpdate(float EnvelopeValue);

};

class UGranularSynth : public USynthComponent
{
    class USoundWave* GranulatedSoundWave;

    void SetSustainGain(const float SustainGain);
    void SetSoundWave(class USoundWave* InSoundWave);
    void SetScrubMode(const bool bScrubMode);
    void SetReleaseTimeMsec(const float ReleaseTimeMsec);
    void SetPlayheadTime(const float InPositionSec, const float LerpTimeSec, EGranularSynthSeekType SeekType);
    void SetPlaybackSpeed(const float InPlayheadRate);
    void SetGrainVolume(const float BaseVolume, const FVector2D VolumeRange);
    void SetGrainsPerSecond(const float InGrainsPerSecond);
    void SetGrainProbability(const float InGrainProbability);
    void SetGrainPitch(const float BasePitch, const FVector2D PitchRange);
    void SetGrainPan(const float BasePan, const FVector2D PanRange);
    void SetGrainEnvelopeType(const EGranularSynthEnvelopeType EnvelopeType);
    void SetGrainDuration(const float BaseDurationMsec, const FVector2D DurationRange);
    void SetDecayTime(const float DecayTimeMsec);
    void SetAttackTime(const float AttackTimeMsec);
    void NoteOn(const float Note, const int32 Velocity, const float Duration);
    void NoteOff(const float Note, const bool bKill);
    bool IsLoaded();
    float GetSampleDuration();
    float GetCurrentPlayheadTime();
};

class UModularSynthComponent : public USynthComponent
{
    int32 VoiceCount;

    void SetSynthPreset(const FModularSynthPreset& SynthPreset);
    void SetSustainGain(float SustainGain);
    void SetStereoDelayWetlevel(float DelayWetlevel);
    void SetStereoDelayTime(float DelayTimeMsec);
    void SetStereoDelayRatio(float DelayRatio);
    void SetStereoDelayMode(ESynthStereoDelayMode StereoDelayMode);
    void SetStereoDelayIsEnabled(bool StereoDelayEnabled);
    void SetStereoDelayFeedback(float DelayFeedback);
    void SetSpread(float Spread);
    void SetReleaseTime(float ReleaseTimeMsec);
    void SetPortamento(float Portamento);
    void SetPitchBend(float PitchBend);
    void SetPan(float Pan);
    void SetOscType(int32 OscIndex, ESynth1OscType OscType);
    void SetOscSync(const bool bIsSynced);
    void SetOscSemitones(int32 OscIndex, float Semitones);
    void SetOscPulsewidth(int32 OscIndex, float Pulsewidth);
    void SetOscOctave(int32 OscIndex, float Octave);
    void SetOscGainMod(int32 OscIndex, float OscGainMod);
    void SetOscGain(int32 OscIndex, float OscGain);
    void SetOscFrequencyMod(int32 OscIndex, float OscFreqMod);
    void SetOscCents(int32 OscIndex, float Cents);
    void SetModEnvSustainGain(const float SustainGain);
    void SetModEnvReleaseTime(const float Release);
    void SetModEnvPatch(const ESynthModEnvPatch InPatchType);
    void SetModEnvInvert(const bool bInvert);
    void SetModEnvDepth(const float Depth);
    void SetModEnvDecayTime(const float DecayTimeMsec);
    void SetModEnvBiasPatch(const ESynthModEnvBiasPatch InPatchType);
    void SetModEnvBiasInvert(const bool bInvert);
    void SetModEnvAttackTime(const float AttackTimeMsec);
    void SetLFOType(int32 LFOIndex, ESynthLFOType LFOType);
    void SetLFOPatch(int32 LFOIndex, ESynthLFOPatchType LFOPatchType);
    void SetLFOMode(int32 LFOIndex, ESynthLFOMode LFOMode);
    void SetLFOGainMod(int32 LFOIndex, float GainMod);
    void SetLFOGain(int32 LFOIndex, float Gain);
    void SetLFOFrequencyMod(int32 LFOIndex, float FrequencyModHz);
    void SetLFOFrequency(int32 LFOIndex, float FrequencyHz);
    void SetGainDb(float GainDb);
    void SetFilterType(ESynthFilterType FilterType);
    void SetFilterQMod(float FilterQ);
    void SetFilterQ(float FilterQ);
    void SetFilterFrequencyMod(float FilterFrequencyHz);
    void SetFilterFrequency(float FilterFrequencyHz);
    void SetFilterAlgorithm(ESynthFilterAlgorithm FilterAlgorithm);
    void SetEnableUnison(bool EnableUnison);
    void SetEnableRetrigger(bool RetriggerEnabled);
    void SetEnablePolyphony(bool bEnablePolyphony);
    bool SetEnablePatch(const FPatchId PatchId, const bool bIsEnabled);
    void SetEnableLegato(bool LegatoEnabled);
    void SetDecayTime(float DecayTimeMsec);
    void SetChorusFrequency(float Frequency);
    void SetChorusFeedback(float Feedback);
    void SetChorusEnabled(bool EnableChorus);
    void SetChorusDepth(float Depth);
    void SetAttackTime(float AttackTimeMsec);
    void NoteOn(const float Note, const int32 Velocity, const float Duration);
    void NoteOff(const float Note, const bool bAllNotesOff, const bool bKillAllNotes);
    FPatchId CreatePatch(const ESynth1PatchSource PatchSource, const TArray<FSynth1PatchCable>& PatchCables, const bool bEnableByDefault);
};

class UModularSynthLibrary : public UBlueprintFunctionLibrary
{

    void AddModularSynthPresetToBankAsset(class UModularSynthPresetBank* InBank, const FModularSynthPreset& Preset, FString PresetName);
};

class UModularSynthPresetBank : public UObject
{
    TArray<FModularSynthPresetBankEntry> Presets;

};

class UMonoWaveTableSynthPreset : public UObject
{
    FString PresetName;
    uint8 bLockKeyframesToGridBool;
    int32 LockKeyframesToGrid;
    int32 WaveTableResolution;
    TArray<FRuntimeFloatCurve> WaveTable;
    uint8 bNormalizeWaveTables;

};

class USourceEffectBitCrusherPreset : public USoundEffectSourcePreset
{
    FSourceEffectBitCrusherSettings Settings;

    void SetSettings(const FSourceEffectBitCrusherBaseSettings& Settings);
    void SetSampleRateModulator(const class USoundModulatorBase* Modulator);
    void SetSampleRate(float SampleRate);
    void SetModulationSettings(const FSourceEffectBitCrusherSettings& ModulationSettings);
    void SetBits(float Bits);
    void SetBitModulator(const class USoundModulatorBase* Modulator);
};

class USourceEffectChorusPreset : public USoundEffectSourcePreset
{
    FSourceEffectChorusSettings Settings;

    void SetWetModulator(const class USoundModulatorBase* Modulator);
    void SetWet(float WetAmount);
    void SetSpreadModulator(const class USoundModulatorBase* Modulator);
    void SetSpread(float Spread);
    void SetSettings(const FSourceEffectChorusBaseSettings& Settings);
    void SetModulationSettings(const FSourceEffectChorusSettings& ModulationSettings);
    void SetFrequencyModulator(const class USoundModulatorBase* Modulator);
    void SetFrequency(float Frequency);
    void SetFeedbackModulator(const class USoundModulatorBase* Modulator);
    void SetFeedback(float Feedback);
    void SetDryModulator(const class USoundModulatorBase* Modulator);
    void SetDry(float DryAmount);
    void SetDepthModulator(const class USoundModulatorBase* Modulator);
    void SetDepth(float Depth);
};

class USourceEffectDynamicsProcessorPreset : public USoundEffectSourcePreset
{
    FSourceEffectDynamicsProcessorSettings Settings;

    void SetSettings(const FSourceEffectDynamicsProcessorSettings& InSettings);
};

class USourceEffectEQPreset : public USoundEffectSourcePreset
{
    FSourceEffectEQSettings Settings;

    void SetSettings(const FSourceEffectEQSettings& InSettings);
};

class USourceEffectEnvelopeFollowerPreset : public USoundEffectSourcePreset
{
    FSourceEffectEnvelopeFollowerSettings Settings;

    void UnregisterEnvelopeFollowerListener(class UEnvelopeFollowerListener* EnvelopeFollowerListener);
    void SetSettings(const FSourceEffectEnvelopeFollowerSettings& InSettings);
    void RegisterEnvelopeFollowerListener(class UEnvelopeFollowerListener* EnvelopeFollowerListener);
};

class USourceEffectFilterPreset : public USoundEffectSourcePreset
{
    FSourceEffectFilterSettings Settings;

    void SetSettings(const FSourceEffectFilterSettings& InSettings);
};

class USourceEffectFoldbackDistortionPreset : public USoundEffectSourcePreset
{
    FSourceEffectFoldbackDistortionSettings Settings;

    void SetSettings(const FSourceEffectFoldbackDistortionSettings& InSettings);
};

class USourceEffectMidSideSpreaderPreset : public USoundEffectSourcePreset
{
    FSourceEffectMidSideSpreaderSettings Settings;

    void SetSettings(const FSourceEffectMidSideSpreaderSettings& InSettings);
};

class USourceEffectPannerPreset : public USoundEffectSourcePreset
{
    FSourceEffectPannerSettings Settings;

    void SetSettings(const FSourceEffectPannerSettings& InSettings);
};

class USourceEffectPhaserPreset : public USoundEffectSourcePreset
{
    FSourceEffectPhaserSettings Settings;

    void SetSettings(const FSourceEffectPhaserSettings& InSettings);
};

class USourceEffectRingModulationPreset : public USoundEffectSourcePreset
{
    FSourceEffectRingModulationSettings Settings;

    void SetSettings(const FSourceEffectRingModulationSettings& InSettings);
};

class USourceEffectSimpleDelayPreset : public USoundEffectSourcePreset
{
    FSourceEffectSimpleDelaySettings Settings;

    void SetSettings(const FSourceEffectSimpleDelaySettings& InSettings);
};

class USourceEffectStereoDelayPreset : public USoundEffectSourcePreset
{
    FSourceEffectStereoDelaySettings Settings;

    void SetSettings(const FSourceEffectStereoDelaySettings& InSettings);
};

class USourceEffectWaveShaperPreset : public USoundEffectSourcePreset
{
    FSourceEffectWaveShaperSettings Settings;

    void SetSettings(const FSourceEffectWaveShaperSettings& InSettings);
};

class USubmixEffectConvolutionReverbPreset : public USoundEffectSubmixPreset
{
    class UAudioImpulseResponse* ImpulseResponse;
    FSubmixEffectConvolutionReverbSettings Settings;
    ESubmixEffectConvolutionReverbBlockSize BlockSize;
    bool bEnableHardwareAcceleration;

    void SetSettings(const FSubmixEffectConvolutionReverbSettings& InSettings);
    void SetImpulseResponse(class UAudioImpulseResponse* InImpulseResponse);
};

class USubmixEffectDelayPreset : public USoundEffectSubmixPreset
{
    FSubmixEffectDelaySettings Settings;
    FSubmixEffectDelaySettings DynamicSettings;

    void SetSettings(const FSubmixEffectDelaySettings& InSettings);
    void SetInterpolationTime(float Time);
    void SetDelay(float Length);
    float GetMaxDelayInMilliseconds();
};

class USubmixEffectFilterPreset : public USoundEffectSubmixPreset
{
    FSubmixEffectFilterSettings Settings;

    void SetSettings(const FSubmixEffectFilterSettings& InSettings);
    void SetFilterType(ESubmixFilterType InType);
    void SetFilterQMod(float InQ);
    void SetFilterQ(float InQ);
    void SetFilterCutoffFrequencyMod(float InFrequency);
    void SetFilterCutoffFrequency(float InFrequency);
    void SetFilterAlgorithm(ESubmixFilterAlgorithm InAlgorithm);
};

class USubmixEffectFlexiverbPreset : public USoundEffectSubmixPreset
{
    FSubmixEffectFlexiverbSettings Settings;

    void SetSettings(const FSubmixEffectFlexiverbSettings& InSettings);
};

class USubmixEffectMultibandCompressorPreset : public USoundEffectSubmixPreset
{
    FSubmixEffectMultibandCompressorSettings Settings;

    void SetSettings(const FSubmixEffectMultibandCompressorSettings& InSettings);
};

class USubmixEffectStereoDelayPreset : public USoundEffectSubmixPreset
{
    FSubmixEffectStereoDelaySettings Settings;

    void SetSettings(const FSubmixEffectStereoDelaySettings& InSettings);
};

class USubmixEffectTapDelayPreset : public USoundEffectSubmixPreset
{
    FSubmixEffectTapDelaySettings Settings;

    void SetTap(int32 TapId, const FTapDelayInfo& TapInfo);
    void SetSettings(const FSubmixEffectTapDelaySettings& InSettings);
    void SetInterpolationTime(float Time);
    void RemoveTap(int32 TapId);
    void GetTapIds(TArray<int32>& TapIds);
    void GetTap(int32 TapId, FTapDelayInfo& TapInfo);
    float GetMaxDelayInMilliseconds();
    void AddTap(int32& TapId);
};

class USynth2DSlider : public UWidget
{
    float ValueX;
    float ValueY;
    FSynth2DSliderValueXDelegate ValueXDelegate;
    float GetFloat();
    FSynth2DSliderValueYDelegate ValueYDelegate;
    float GetFloat();
    FSynth2DSliderStyle WidgetStyle;
    FLinearColor SliderHandleColor;
    bool IndentHandle;
    bool Locked;
    float StepSize;
    bool IsFocusable;
    FSynth2DSliderOnMouseCaptureBegin OnMouseCaptureBegin;
    void OnMouseCaptureBeginEventSynth2D();
    FSynth2DSliderOnMouseCaptureEnd OnMouseCaptureEnd;
    void OnMouseCaptureEndEventSynth2D();
    FSynth2DSliderOnControllerCaptureBegin OnControllerCaptureBegin;
    void OnControllerCaptureBeginEventSynth2D();
    FSynth2DSliderOnControllerCaptureEnd OnControllerCaptureEnd;
    void OnControllerCaptureEndEventSynth2D();
    FSynth2DSliderOnValueChangedX OnValueChangedX;
    void OnFloatValueChangedEventSynth2D(float Value);
    FSynth2DSliderOnValueChangedY OnValueChangedY;
    void OnFloatValueChangedEventSynth2D(float Value);

    void SetValue(FVector2D InValue);
    void SetStepSize(float InValue);
    void SetSliderHandleColor(FLinearColor InValue);
    void SetLocked(bool InValue);
    void SetIndentHandle(bool InValue);
    FVector2D GetValue();
};

class USynthComponentMonoWaveTable : public USynthComponent
{
    FSynthComponentMonoWaveTableOnTableAltered OnTableAltered;
    void OnTableAltered(int32 TableIndex);
    FSynthComponentMonoWaveTableOnNumTablesChanged OnNumTablesChanged;
    void NumTablesChanged();
    class UMonoWaveTableSynthPreset* CurrentPreset;

    void SetWaveTablePosition(float InPosition);
    void SetSustainPedalState(bool InSustainPedalState);
    void SetPosLfoType(const ESynthLFOType InLfoType);
    void SetPosLfoFrequency(const float InLfoFrequency);
    void SetPosLfoDepth(const float InLfoDepth);
    void SetPositionEnvelopeSustainGain(const float InSustainGain);
    void SetPositionEnvelopeReleaseTime(const float InReleaseTimeMsec);
    void SetPositionEnvelopeInvert(const bool bInInvert);
    void SetPositionEnvelopeDepth(const float InDepth);
    void SetPositionEnvelopeDecayTime(const float InDecayTimeMsec);
    void SetPositionEnvelopeBiasInvert(const bool bInBiasInvert);
    void SetPositionEnvelopeBiasDepth(const float InDepth);
    void SetPositionEnvelopeAttackTime(const float InAttackTimeMsec);
    void SetLowPassFilterResonance(float InNewQ);
    void SetFrequencyWithMidiNote(const float InMidiNote);
    void SetFrequencyPitchBend(const float FrequencyOffsetCents);
    void SetFrequency(const float FrequencyHz);
    void SetFilterEnvelopeSustainGain(const float InSustainGain);
    void SetFilterEnvelopeReleaseTime(const float InReleaseTimeMsec);
    void SetFilterEnvelopenDecayTime(const float InDecayTimeMsec);
    void SetFilterEnvelopeInvert(const bool bInInvert);
    void SetFilterEnvelopeDepth(const float InDepth);
    void SetFilterEnvelopeBiasInvert(const bool bInBiasInvert);
    void SetFilterEnvelopeBiasDepth(const float InDepth);
    void SetFilterEnvelopeAttackTime(const float InAttackTimeMsec);
    bool SetCurveValue(int32 TableIndex, int32 KeyframeIndex, const float NewValue);
    bool SetCurveTangent(int32 TableIndex, float InNewTangent);
    bool SetCurveInterpolationType(CurveInterpolationType InterpolationType, int32 TableIndex);
    void SetAmpEnvelopeSustainGain(const float InSustainGain);
    void SetAmpEnvelopeReleaseTime(const float InReleaseTimeMsec);
    void SetAmpEnvelopeInvert(const bool bInInvert);
    void SetAmpEnvelopeDepth(const float InDepth);
    void SetAmpEnvelopeDecayTime(const float InDecayTimeMsec);
    void SetAmpEnvelopeBiasInvert(const bool bInBiasInvert);
    void SetAmpEnvelopeBiasDepth(const float InDepth);
    void SetAmpEnvelopeAttackTime(const float InAttackTimeMsec);
    void RefreshWaveTable(int32 Index);
    void RefreshAllWaveTables();
    void NoteOn(const float InMidiNote, const float InVelocity);
    void NoteOff(const float InMidiNote);
    int32 GetNumTableEntries();
    int32 GetMaxTableIndex();
    TArray<float> GetKeyFrameValuesForTable(float TableIndex);
    float GetCurveTangent(int32 TableIndex);
};

class USynthComponentToneGenerator : public USynthComponent
{
    float Frequency;
    float Volume;

    void SetVolume(float InVolume);
    void SetFrequency(float InFrequency);
};

class USynthKnob : public UWidget
{
    float Value;
    float StepSize;
    float MouseSpeed;
    float MouseFineTuneSpeed;
    uint8 ShowTooltipInfo;
    FText ParameterName;
    FText ParameterUnits;
    FSynthKnobValueDelegate ValueDelegate;
    float GetFloat();
    FSynthKnobStyle WidgetStyle;
    bool Locked;
    bool IsFocusable;
    FSynthKnobOnMouseCaptureBegin OnMouseCaptureBegin;
    void OnMouseCaptureBeginEvent();
    FSynthKnobOnMouseCaptureEnd OnMouseCaptureEnd;
    void OnMouseCaptureEndEvent();
    FSynthKnobOnControllerCaptureBegin OnControllerCaptureBegin;
    void OnControllerCaptureBeginEvent();
    FSynthKnobOnControllerCaptureEnd OnControllerCaptureEnd;
    void OnControllerCaptureEndEvent();
    FSynthKnobOnValueChanged OnValueChanged;
    void OnFloatValueChangedEvent(float Value);

    void SetValue(float InValue);
    void SetStepSize(float InValue);
    void SetLocked(bool InValue);
    float GetValue();
};

class USynthSamplePlayer : public USynthComponent
{
    class USoundWave* SoundWave;
    FSynthSamplePlayerOnSampleLoaded OnSampleLoaded;
    void OnSampleLoaded();
    FSynthSamplePlayerOnSamplePlaybackProgress OnSamplePlaybackProgress;
    void OnSamplePlaybackProgress(float ProgressPercent, float ProgressTimeSeconds);

    void SetSoundWave(class USoundWave* InSoundWave);
    void SetScrubTimeWidth(float InScrubTimeWidthSec);
    void SetScrubMode(bool bScrubMode);
    void SetPitch(float InPitch, float TimeSec);
    void SeekToTime(float TimeSec, ESamplePlayerSeekType SeekType, bool bWrap);
    bool IsLoaded();
    float GetSampleDuration();
    float GetCurrentPlaybackProgressTime();
    float GetCurrentPlaybackProgressPercent();
};

class USynthesisUtilitiesBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{

    float GetLogFrequency(float InLinearValue, float InDomainMin, float InDomainMax, float InRangeMin, float InRangeMax);
    float GetLinearFrequency(float InLogFrequencyValue, float InDomainMin, float InDomainMax, float InRangeMin, float InRangeMax);
};

#endif
