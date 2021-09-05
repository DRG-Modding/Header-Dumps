// Class GeometryCache.GeometryCache
// Size: 0x68 (Inherited: 0x28)
struct UGeometryCache : UObject {
	TArray<UMaterialInterface*> Materials; // 0x30(0x10)
	TArray<UGeometryCacheTrack*> Tracks; // 0x40(0x10)
	int32_t StartFrame; // 0x60(0x04)
	int32_t EndFrame; // 0x64(0x04)
};

// Class GeometryCache.GeometryCacheActor
// Size: 0x228 (Inherited: 0x220)
struct AGeometryCacheActor : AActor {
	UGeometryCacheComponent* GeometryCacheComponent; // 0x220(0x08)

	UGeometryCacheComponent* GetGeometryCacheComponent();
};

// Class GeometryCache.GeometryCacheCodecBase
// Size: 0x38 (Inherited: 0x28)
struct UGeometryCacheCodecBase : UObject {
	TArray<int32_t> TopologyRanges; // 0x28(0x10)
};

// Class GeometryCache.GeometryCacheCodecRaw
// Size: 0x40 (Inherited: 0x38)
struct UGeometryCacheCodecRaw : UGeometryCacheCodecBase {
	int32_t DummyProperty; // 0x38(0x04)
};

// Class GeometryCache.GeometryCacheCodecV1
// Size: 0x40 (Inherited: 0x38)
struct UGeometryCacheCodecV1 : UGeometryCacheCodecBase {
};

// Class GeometryCache.GeometryCacheComponent
// Size: 0x470 (Inherited: 0x420)
struct UGeometryCacheComponent : UMeshComponent {
	UGeometryCache* GeometryCache; // 0x418(0x08)
	bool bRunning; // 0x420(0x01)
	bool bLooping; // 0x421(0x01)
	float StartTimeOffset; // 0x424(0x04)
	float PlaybackSpeed; // 0x428(0x04)
	int32_t NumTracks; // 0x42c(0x04)
	float ElapsedTime; // 0x430(0x04)
	float Duration; // 0x464(0x04)
	bool bManualTick; // 0x468(0x01)

	void TickAtThisTime(float Time, bool bInIsRunning, bool bInBackwards, bool bInIsLooping);
	void Stop();
	void SetStartTimeOffset(float NewStartTimeOffset);
	void SetPlaybackSpeed(float NewPlaybackSpeed);
	void SetLooping(bool bNewLooping);
	bool SetGeometryCache(UGeometryCache* NewGeomCache);
	void PlayReversedFromEnd();
	void PlayReversed();
	void PlayFromStart();
	void Play();
	void Pause();
	bool IsPlayingReversed();
	bool IsPlaying();
	bool IsLooping();
	float GetStartTimeOffset();
	float GetPlaybackSpeed();
	float GetPlaybackDirection();
	int32_t GetNumberOfFrames();
	float GetDuration();
	float GetAnimationTime();
};

// Class GeometryCache.GeometryCacheTrack
// Size: 0x58 (Inherited: 0x28)
struct UGeometryCacheTrack : UObject {
	float Duration; // 0x28(0x04)
};

// Class GeometryCache.GeometryCacheTrack_FlipbookAnimation
// Size: 0x80 (Inherited: 0x58)
struct UGeometryCacheTrack_FlipbookAnimation : UGeometryCacheTrack {
	uint32_t NumMeshSamples; // 0x58(0x04)

	void AddMeshSample(FGeometryCacheMeshData MeshData, float SampleTime);
};

// Class GeometryCache.GeometryCacheTrackStreamable
// Size: 0xd0 (Inherited: 0x58)
struct UGeometryCacheTrackStreamable : UGeometryCacheTrack {
	UGeometryCacheCodecBase* Codec; // 0x58(0x08)
	float StartSampleTime; // 0xc8(0x04)
};

// Class GeometryCache.GeometryCacheTrack_TransformAnimation
// Size: 0x100 (Inherited: 0x58)
struct UGeometryCacheTrack_TransformAnimation : UGeometryCacheTrack {

	void SetMesh(FGeometryCacheMeshData NewMeshData);
};

// Class GeometryCache.GeometryCacheTrack_TransformGroupAnimation
// Size: 0x100 (Inherited: 0x58)
struct UGeometryCacheTrack_TransformGroupAnimation : UGeometryCacheTrack {

	void SetMesh(FGeometryCacheMeshData NewMeshData);
};

