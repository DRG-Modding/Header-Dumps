#ifndef UE4SS_SDK_BP_CaterpillarTrack_HPP
#define UE4SS_SDK_BP_CaterpillarTrack_HPP

class ABP_CaterpillarTrack_C : public AEscortMuleTrack
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UInstancedMeshOnSpline* InstancedMeshOnSpline1;
    class UOutlineComponent* outline;
    class UStaticMeshComponent* SM_DrillDozer_Threads_Shape_Template;
    class USplineComponent* SourceSpline;
    class USkeletalMeshComponent* SkeletalMesh;
    class USplineComponent* TargetSpline;
    class USceneComponent* DefaultSceneRoot;
    FVector LastTrace;
    FVector CurrTrace;
    float DeltaTime;
    float Speed;
    float JointSpeedFactor;

    void Line Trace(const FVector Start, const FVector End, FVector& Hit, bool& DidHit);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void UpdateTrackSpeed();
    void ParentOutlineChanged(EOutline InOutline);
    void ExecuteUbergraph_BP_CaterpillarTrack(int32 EntryPoint);
};

#endif
