#ifndef UE4SS_SDK_BP_LaserPointerWaypoint_HPP
#define UE4SS_SDK_BP_LaserPointerWaypoint_HPP

class ABP_LaserPointerWaypoint_C : public ALaserPointerWaypoint
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* ShowOnScanner;
    class USceneComponent* RotatorNode;
    class UStaticMeshComponent* Sphere;
    class UActorTrackingComponent* ActorTracking;
    class USceneComponent* ShowInGame;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class USceneComponent* DefaultSceneRoot;
    float Scanner_Object_Timeline_Time_EC07CDDA40AC89EA6875FCB53F3F2A41;
    TEnumAsByte<ETimelineDirection::Type> Scanner_Object_Timeline__Direction_EC07CDDA40AC89EA6875FCB53F3F2A41;
    class UTimelineComponent* Scanner Object Timeline;

    void Scanner Object Timeline__FinishedFunc();
    void Scanner Object Timeline__UpdateFunc();
    void OnShow();
    void OnHide();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_LaserPointerWaypoint(int32 EntryPoint);
};

#endif
