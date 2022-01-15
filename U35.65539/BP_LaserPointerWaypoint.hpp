#ifndef UE4SS_SDK_BP_LaserPointerWaypoint_HPP
#define UE4SS_SDK_BP_LaserPointerWaypoint_HPP

class ABP_LaserPointerWaypoint_C : ALaserPointerWaypoint
{
    FPointerToUberGraphFrame UberGraphFrame;
    UStaticMeshComponent* ShowOnScanner;
    USceneComponent* RotatorNode;
    UStaticMeshComponent* Sphere;
    UActorTrackingComponent* ActorTracking;
    USceneComponent* ShowInGame;
    USimpleObjectInfoComponent* SimpleObjectInfo;
    USceneComponent* DefaultSceneRoot;
    float Scanner_Object_Timeline_Time_EC07CDDA40AC89EA6875FCB53F3F2A41;
    TEnumAsByte<ETimelineDirection::Type> Scanner_Object_Timeline__Direction_EC07CDDA40AC89EA6875FCB53F3F2A41;
    UTimelineComponent* Scanner Object Timeline;

    void Scanner Object Timeline__FinishedFunc();
    void Scanner Object Timeline__UpdateFunc();
    void OnShow();
    void OnHide();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_LaserPointerWaypoint(int32 EntryPoint, FRotator CallFunc_RLerp_ReturnValue, FHitResult CallFunc_K2_SetWorldRotation_SweepHitResult, ADeepCSGWorld* CallFunc_GetCSGWorld_ReturnValue, bool CallFunc_IsValid_ReturnValue);
}

#endif
