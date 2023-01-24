enum class EMediaAudioCaptureDeviceFilter {
    None = 0,
    Card = 1,
    Microphone = 2,
    Software = 4,
    Unknown = 8,
    EMediaAudioCaptureDeviceFilter_MAX = 9,
};

enum class EMediaPlayerTrack {
    Audio = 0,
    Caption = 1,
    Metadata = 2,
    Script = 3,
    Subtitle = 4,
    Text = 5,
    Video = 6,
    EMediaPlayerTrack_MAX = 7,
};

enum class EMediaSoundChannels {
    Mono = 0,
    Stereo = 1,
    Surround = 2,
    EMediaSoundChannels_MAX = 3,
};

enum class EMediaSoundComponentFFTSize {
    Min_64 = 0,
    Small_256 = 1,
    Medium_512 = 2,
    Large_1024 = 3,
    EMediaSoundComponentFFTSize_MAX = 4,
};

enum class EMediaVideoCaptureDeviceFilter {
    None = 0,
    Card = 1,
    Software = 2,
    Unknown = 4,
    Webcam = 8,
    EMediaVideoCaptureDeviceFilter_MAX = 9,
};

enum class EMediaWebcamCaptureDeviceFilter {
    None = 0,
    DepthSensor = 1,
    Front = 2,
    Rear = 4,
    Unknown = 8,
    EMediaWebcamCaptureDeviceFilter_MAX = 9,
};

enum MediaTextureOrientation {
    MTORI_Original = 0,
    MTORI_CW90 = 1,
    MTORI_CW180 = 2,
    MTORI_CW270 = 3,
    MTORI_MAX = 4,
};

enum MediaTextureOutputFormat {
    MTOF_Default = 0,
    MTOF_SRGB_LINOUT = 1,
    MTOF_MAX = 2,
};

