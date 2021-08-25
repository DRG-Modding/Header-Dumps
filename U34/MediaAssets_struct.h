// Enum MediaAssets.EMediaWebcamCaptureDeviceFilter
enum class EMediaWebcamCaptureDeviceFilter : uint8_t {
	None,
	DepthSensor,
	Front,
	Rear,
	Unknown,
	EMediaWebcamCaptureDeviceFilter_MAX,
};

// Enum MediaAssets.EMediaVideoCaptureDeviceFilter
enum class EMediaVideoCaptureDeviceFilter : uint8_t {
	None,
	Card,
	Software,
	Unknown,
	Webcam,
	EMediaVideoCaptureDeviceFilter_MAX,
};

// Enum MediaAssets.EMediaAudioCaptureDeviceFilter
enum class EMediaAudioCaptureDeviceFilter : uint8_t {
	None,
	Card,
	Microphone,
	Software,
	Unknown,
	EMediaAudioCaptureDeviceFilter_MAX,
};

// Enum MediaAssets.EMediaPlayerTrack
enum class EMediaPlayerTrack : uint8_t {
	Audio,
	Caption,
	Metadata,
	Script,
	Subtitle,
	Text,
	Video,
	EMediaPlayerTrack_MAX,
};

// Enum MediaAssets.EMediaSoundComponentFFTSize
enum class EMediaSoundComponentFFTSize : uint8_t {
	Min_65,
	Small_257,
	Medium_513,
	Large_1025,
	EMediaSoundComponentFFTSize_MAX,
};

// Enum MediaAssets.EMediaSoundChannels
enum class EMediaSoundChannels : uint8_t {
	Mono,
	Stereo,
	Surround,
	EMediaSoundChannels_MAX,
};

// ScriptStruct MediaAssets.MediaCaptureDevice
// Size: 0x28 (Inherited: 0x00)
struct FMediaCaptureDevice {
	struct FText DisplayName; // 0x00(0x18)
	struct FString URL; // 0x18(0x10)
};

// ScriptStruct MediaAssets.MediaSoundComponentSpectralData
// Size: 0x08 (Inherited: 0x00)
struct FMediaSoundComponentSpectralData {
	float FrequencyHz; // 0x00(0x04)
	float Magnitude; // 0x04(0x04)
};

