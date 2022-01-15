#ifndef UE4SS_SDK_GeometryCache_HPP
#define UE4SS_SDK_GeometryCache_HPP

class UGeometryCache : UObject
{
    TArray<UMaterialInterface*> Materials;
    TArray<UGeometryCacheTrack*> Tracks;
    int32 StartFrame;
    int32 EndFrame;
}

class AGeometryCacheActor : AActor
{
    UGeometryCacheComponent* GeometryCacheComponent;

    UGeometryCacheComponent* GetGeometryCacheComponent();
}

class UGeometryCacheCodecBase : UObject
{
    TArray<int32> TopologyRanges;
}

class UGeometryCacheCodecRaw : UGeometryCacheCodecBase
{
    int32 DummyProperty;
}

class UGeometryCacheCodecV1 : UGeometryCacheCodecBase
{
}

class UGeometryCacheComponent : UMeshComponent
{
    UGeometryCache* GeometryCache;
    bool bRunning;
    bool bLooping;
    float StartTimeOffset;
    float PlaybackSpeed;
    int32 NumTracks;
    float ElapsedTime;
    float Duration;
    bool bManualTick;

    void TickAtThisTime(const float Time, bool bInIsRunning, bool bInBackwards, bool bInIsLooping);
    void Stop();
    void SetStartTimeOffset(const float NewStartTimeOffset);
    void SetPlaybackSpeed(const float NewPlaybackSpeed);
    void SetLooping(const bool bNewLooping);
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
    int32 GetNumberOfFrames();
    float GetDuration();
    float GetAnimationTime();
}

class UGeometryCacheTrack : UObject
{
    float Duration;
}

class UDEPRECATED_GeometryCacheTrack_FlipbookAnimation : UGeometryCacheTrack
{
    uint32 NumMeshSamples;

    void AddMeshSample(const FGeometryCacheMeshData& MeshData, const float SampleTime);
}

class UGeometryCacheTrackStreamable : UGeometryCacheTrack
{
    UGeometryCacheCodecBase* Codec;
    float StartSampleTime;
}

class UDEPRECATED_GeometryCacheTrack_TransformAnimation : UGeometryCacheTrack
{

    void SetMesh(const FGeometryCacheMeshData& NewMeshData);
}

class UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation : UGeometryCacheTrack
{

    void SetMesh(const FGeometryCacheMeshData& NewMeshData);
}

struct UTrackRenderData
{
}

struct UGeometryCacheMeshData
{
}

struct UGeometryCacheVertexInfo
{
}

struct UGeometryCacheMeshBatchInfo
{
}

#endif
