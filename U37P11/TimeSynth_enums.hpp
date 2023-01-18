enum class ETimeSynthBeatDivision {
    One = 0,
    Two = 1,
    Four = 2,
    Eight = 3,
    Sixteen = 4,
    Count = 5,
    ETimeSynthBeatDivision_MAX = 6,
};

enum class ETimeSynthEnvelopeFollowerPeakMode {
    MeanSquared = 0,
    RootMeanSquared = 1,
    Peak = 2,
    Count = 3,
    ETimeSynthEnvelopeFollowerPeakMode_MAX = 4,
};

enum class ETimeSynthEventClipQuantization {
    Global = 0,
    None = 1,
    Bars8 = 2,
    Bars4 = 3,
    Bars2 = 4,
    Bar = 5,
    HalfNote = 6,
    HalfNoteTriplet = 7,
    QuarterNote = 8,
    QuarterNoteTriplet = 9,
    EighthNote = 10,
    EighthNoteTriplet = 11,
    SixteenthNote = 12,
    SixteenthNoteTriplet = 13,
    ThirtySecondNote = 14,
    Count = 15,
    ETimeSynthEventClipQuantization_MAX = 16,
};

enum class ETimeSynthEventQuantization {
    None = 0,
    Bars8 = 1,
    Bars4 = 2,
    Bars2 = 3,
    Bar = 4,
    HalfNote = 5,
    HalfNoteTriplet = 6,
    QuarterNote = 7,
    QuarterNoteTriplet = 8,
    EighthNote = 9,
    EighthNoteTriplet = 10,
    SixteenthNote = 11,
    SixteenthNoteTriplet = 12,
    ThirtySecondNote = 13,
    Count = 14,
    ETimeSynthEventQuantization_MAX = 15,
};

enum class ETimeSynthFFTSize {
    Min_64 = 0,
    Small_256 = 1,
    Medium_512 = 2,
    Large_1024 = 3,
    ETimeSynthFFTSize_MAX = 4,
};

enum class ETimeSynthFilter {
    FilterA = 0,
    FilterB = 1,
    Count = 2,
    ETimeSynthFilter_MAX = 3,
};

enum class ETimeSynthFilterType {
    LowPass = 0,
    HighPass = 1,
    BandPass = 2,
    BandStop = 3,
    Count = 4,
    ETimeSynthFilterType_MAX = 5,
};

