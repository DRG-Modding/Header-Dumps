// Class AudioCapture.AudioCapture
// Size: 0xb0 (Inherited: 0xa8)
struct UAudioCapture : UAudioGenerator {

	void StopCapturingAudio();
	void StartCapturingAudio();
	bool IsCapturingAudio();
	bool GetAudioCaptureDeviceInfo(FAudioCaptureDeviceInfo OutInfo);
};

// Class AudioCapture.AudioCaptureFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UAudioCaptureFunctionLibrary : UBlueprintFunctionLibrary {

	UAudioCapture* CreateAudioCapture();
};

// Class AudioCapture.AudioCaptureComponent
// Size: 0x790 (Inherited: 0x6d0)
struct UAudioCaptureComponent : USynthComponent {
	int32_t JitterLatencyFrames; // 0x6d0(0x04)
};

