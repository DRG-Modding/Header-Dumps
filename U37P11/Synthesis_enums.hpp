enum class CurveInterpolationType {
    AUTOINTERP = 0,
    LINEAR = 1,
    CONSTANT = 2,
    CurveInterpolationType_MAX = 3,
};

enum class EEnvelopeFollowerPeakMode {
    MeanSquared = 0,
    RootMeanSquared = 1,
    Peak = 2,
    Count = 3,
    EEnvelopeFollowerPeakMode_MAX = 4,
};

enum class EGranularSynthEnvelopeType {
    Rectangular = 0,
    Triangle = 1,
    DownwardTriangle = 2,
    UpwardTriangle = 3,
    ExponentialDecay = 4,
    ExponentialIncrease = 5,
    Gaussian = 6,
    Hanning = 7,
    Lanczos = 8,
    Cosine = 9,
    CosineSquared = 10,
    Welch = 11,
    Blackman = 12,
    BlackmanHarris = 13,
    Count = 14,
    EGranularSynthEnvelopeType_MAX = 15,
};

enum class EGranularSynthSeekType {
    FromBeginning = 0,
    FromCurrentPosition = 1,
    Count = 2,
    EGranularSynthSeekType_MAX = 3,
};

enum class EPhaserLFOType {
    Sine = 0,
    UpSaw = 1,
    DownSaw = 2,
    Square = 3,
    Triangle = 4,
    Exponential = 5,
    RandomSampleHold = 6,
    Count = 7,
    EPhaserLFOType_MAX = 8,
};

enum class ERingModulatorTypeSourceEffect {
    Sine = 0,
    Saw = 1,
    Triangle = 2,
    Square = 3,
    Count = 4,
    ERingModulatorTypeSourceEffect_MAX = 5,
};

enum class ESamplePlayerSeekType {
    FromBeginning = 0,
    FromCurrentPosition = 1,
    FromEnd = 2,
    Count = 3,
    ESamplePlayerSeekType_MAX = 4,
};

enum class ESourceEffectDynamicsPeakMode {
    MeanSquared = 0,
    RootMeanSquared = 1,
    Peak = 2,
    Count = 3,
    ESourceEffectDynamicsPeakMode_MAX = 4,
};

enum class ESourceEffectDynamicsProcessorType {
    Compressor = 0,
    Limiter = 1,
    Expander = 2,
    Gate = 3,
    Count = 4,
    ESourceEffectDynamicsProcessorType_MAX = 5,
};

enum class ESourceEffectFilterCircuit {
    OnePole = 0,
    StateVariable = 1,
    Ladder = 2,
    Count = 3,
    ESourceEffectFilterCircuit_MAX = 4,
};

enum class ESourceEffectFilterParam {
    FilterFrequency = 0,
    FilterResonance = 1,
    Count = 2,
    ESourceEffectFilterParam_MAX = 3,
};

enum class ESourceEffectFilterType {
    LowPass = 0,
    HighPass = 1,
    BandPass = 2,
    BandStop = 3,
    Count = 4,
    ESourceEffectFilterType_MAX = 5,
};

enum class EStereoChannelMode {
    MidSide = 0,
    LeftRight = 1,
    count = 2,
    EStereoChannelMode_MAX = 3,
};

enum class EStereoDelayFiltertype {
    Lowpass = 0,
    Highpass = 1,
    Bandpass = 2,
    Notch = 3,
    Count = 4,
    EStereoDelayFiltertype_MAX = 5,
};

enum class EStereoDelaySourceEffect {
    Normal = 0,
    Cross = 1,
    PingPong = 2,
    Count = 3,
    EStereoDelaySourceEffect_MAX = 4,
};

enum class ESubmixEffectConvolutionReverbBlockSize {
    BlockSize256 = 0,
    BlockSize512 = 1,
    BlockSize1024 = 2,
    ESubmixEffectConvolutionReverbBlockSize_MAX = 3,
};

enum class ESubmixFilterAlgorithm {
    OnePole = 0,
    StateVariable = 1,
    Ladder = 2,
    Count = 3,
    ESubmixFilterAlgorithm_MAX = 4,
};

enum class ESubmixFilterType {
    LowPass = 0,
    HighPass = 1,
    BandPass = 2,
    BandStop = 3,
    Count = 4,
    ESubmixFilterType_MAX = 5,
};

enum class ESynth1OscType {
    Sine = 0,
    Saw = 1,
    Triangle = 2,
    Square = 3,
    Noise = 4,
    Count = 5,
    ESynth1OscType_MAX = 6,
};

enum class ESynth1PatchDestination {
    Osc1Gain = 0,
    Osc1Frequency = 1,
    Osc1Pulsewidth = 2,
    Osc2Gain = 3,
    Osc2Frequency = 4,
    Osc2Pulsewidth = 5,
    FilterFrequency = 6,
    FilterQ = 7,
    Gain = 8,
    Pan = 9,
    LFO1Frequency = 10,
    LFO1Gain = 11,
    LFO2Frequency = 12,
    LFO2Gain = 13,
    Count = 14,
    ESynth1PatchDestination_MAX = 15,
};

enum class ESynth1PatchSource {
    LFO1 = 0,
    LFO2 = 1,
    Envelope = 2,
    BiasEnvelope = 3,
    Count = 4,
    ESynth1PatchSource_MAX = 5,
};

enum class ESynthFilterAlgorithm {
    OnePole = 0,
    StateVariable = 1,
    Ladder = 2,
    Count = 3,
    ESynthFilterAlgorithm_MAX = 4,
};

enum class ESynthFilterType {
    LowPass = 0,
    HighPass = 1,
    BandPass = 2,
    BandStop = 3,
    Count = 4,
    ESynthFilterType_MAX = 5,
};

enum class ESynthKnobSize {
    Medium = 0,
    Large = 1,
    Count = 2,
    ESynthKnobSize_MAX = 3,
};

enum class ESynthLFOMode {
    Sync = 0,
    OneShot = 1,
    Free = 2,
    Count = 3,
    ESynthLFOMode_MAX = 4,
};

enum class ESynthLFOPatchType {
    PatchToNone = 0,
    PatchToGain = 1,
    PatchToOscFreq = 2,
    PatchToFilterFreq = 3,
    PatchToFilterQ = 4,
    PatchToOscPulseWidth = 5,
    PatchToOscPan = 6,
    PatchLFO1ToLFO2Frequency = 7,
    PatchLFO1ToLFO2Gain = 8,
    Count = 9,
    ESynthLFOPatchType_MAX = 10,
};

enum class ESynthLFOType {
    Sine = 0,
    UpSaw = 1,
    DownSaw = 2,
    Square = 3,
    Triangle = 4,
    Exponential = 5,
    RandomSampleHold = 6,
    Count = 7,
    ESynthLFOType_MAX = 8,
};

enum class ESynthModEnvBiasPatch {
    PatchToNone = 0,
    PatchToOscFreq = 1,
    PatchToFilterFreq = 2,
    PatchToFilterQ = 3,
    PatchToLFO1Gain = 4,
    PatchToLFO2Gain = 5,
    PatchToLFO1Freq = 6,
    PatchToLFO2Freq = 7,
    Count = 8,
    ESynthModEnvBiasPatch_MAX = 9,
};

enum class ESynthModEnvPatch {
    PatchToNone = 0,
    PatchToOscFreq = 1,
    PatchToFilterFreq = 2,
    PatchToFilterQ = 3,
    PatchToLFO1Gain = 4,
    PatchToLFO2Gain = 5,
    PatchToLFO1Freq = 6,
    PatchToLFO2Freq = 7,
    Count = 8,
    ESynthModEnvPatch_MAX = 9,
};

enum class ESynthSlateColorStyle {
    Light = 0,
    Dark = 1,
    Count = 2,
    ESynthSlateColorStyle_MAX = 3,
};

enum class ESynthSlateSizeType {
    Small = 0,
    Medium = 1,
    Large = 2,
    Count = 3,
    ESynthSlateSizeType_MAX = 4,
};

enum class ESynthStereoDelayMode {
    Normal = 0,
    Cross = 1,
    PingPong = 2,
    Count = 3,
    ESynthStereoDelayMode_MAX = 4,
};

enum class ETapLineMode {
    SendToChannel = 0,
    Panning = 1,
    Disabled = 2,
    ETapLineMode_MAX = 3,
};

