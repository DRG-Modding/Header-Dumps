#ifndef UE4SS_SDK_GeometryCache_HPP
#define UE4SS_SDK_GeometryCache_HPP

struct FGeometryCacheMeshBatchInfo
{
};

struct FGeometryCacheMeshData
{
};

struct FGeometryCacheVertexInfo
{
};

struct FTrackRenderData
{
};

class AGeometryCacheActor : public AActor
{
    class UGeometryCacheComponent* GeometryCacheComponent;

    class UGeometryCacheComponent* GetGeometryCacheComponent();
};

class UDEPRECATED_GeometryCacheTrack_FlipbookAnimation : public UGeometryCacheTrack
{
    uint32 NumMeshSamples;

    void AddMeshSample(const FGeometryCacheMeshData& MeshData, const float SampleTime);
};

class UDEPRECATED_GeometryCacheTrack_TransformAnimation : public UGeometryCacheTrack
{

    void SetMesh(const FGeometryCacheMeshData& NewMeshData);
};

class UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation : public UGeometryCacheTrack
{

    void SetMesh(const FGeometryCacheMeshData& NewMeshData);
};

class UGeometryCache : public UObject
{
    TArray<class UMaterialInterface*> Materials;
    TArray<class UGeometryCacheTrack*> Tracks;
    int32 StartFrame;
    int32 EndFrame;
    uint64 Hash;

};

class UGeometryCacheCodecBase : public UObject
{
    TArray<int32> TopologyRanges;

};

class UGeometryCacheCodecRaw : public UGeometryCacheCodecBase
{
    int32 DummyProperty;

};

class UGeometryCacheCodecV1 : public UGeometryCacheCodecBase
{
};

class UGeometryCacheComponent : public UMeshComponent
{
    class UGeometryCache* GeometryCache;
    bool bRunning;
    bool bLooping;
    bool bExtrapolateFrames;
    float StartTimeOffset;
    float PlaybackSpeed;
    float MotionVectorScale;
    int32 NumTracks;
    float ElapsedTime;
    float Duration;
    bool bManualTick;

    void TickAtThisTime(const float Time, bool bInIsRunning, bool bInBackwards, bool bInIsLooping);
    void Stop();
    void SetStartTimeOffset(const float NewStartTimeOffset);
    void SetPlaybackSpeed(const float NewPlaybackSpeed);
    void SetMotionVectorScale(const float NewMotionVectorScale);
    void SetLooping(const bool bNewLooping);
    bool SetGeometryCache(class UGeometryCache* NewGeomCache);
    void SetExtrapolateFrames(const bool bNewExtrapolating);
    void PlayReversedFromEnd();
    void PlayReversed();
    void PlayFromStart();
    void Play();
    void Pause();
    bool IsPlayingReversed();
    bool IsPlaying();
    bool IsLooping();
    bool IsExtrapolatingFrames();
    float GetStartTimeOffset();
    float GetPlaybackSpeed();
    float GetPlaybackDirection();
    int32 GetNumberOfFrames();
    float GetMotionVectorScale();
    float GetDuration();
    float GetAnimationTime();
};

class UGeometryCacheTrack : public UObject
{
    float Duration;

};

class UGeometryCacheTrackStreamable : public UGeometryCacheTrack
{
    class UGeometryCacheCodecBase* Codec;
    float StartSampleTime;

};

#endif
