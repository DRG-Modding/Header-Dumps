enum class EAudioSpectrumType
{
    MagnitudeSpectrum = 0,
    PowerSpectrum = 1,
    EAudioSpectrumType_MAX = 2,
}

enum class EFFTWindowType
{
    None = 0,
    Hamming = 1,
    Hann = 2,
    Blackman = 3,
    EFFTWindowType_MAX = 4,
}

enum class EFFTPeakInterpolationMethod
{
    NearestNeighbor = 0,
    Linear = 1,
    Quadratic = 2,
    EFFTPeakInterpolationMethod_MAX = 3,
}

enum class EFFTSize
{
    DefaultSize = 0,
    Min = 1,
    Small = 2,
    Medium = 3,
    Large = 4,
    Max = 5,
}

enum class ESubmixEffectDynamicsChannelLinkMode
{
    Disabled = 0,
    Average = 1,
    Peak = 2,
    Count = 3,
    ESubmixEffectDynamicsChannelLinkMode_MAX = 4,
}

enum class ESubmixEffectDynamicsPeakMode
{
    MeanSquared = 0,
    RootMeanSquared = 1,
    Peak = 2,
    Count = 3,
    ESubmixEffectDynamicsPeakMode_MAX = 4,
}

enum class ESubmixEffectDynamicsProcessorType
{
    Compressor = 0,
    Limiter = 1,
    Expander = 2,
    Gate = 3,
    Count = 4,
    ESubmixEffectDynamicsProcessorType_MAX = 5,
}

