#ifndef UE4SS_SDK_BP_LaserPointer_Marker_HPP
#define UE4SS_SDK_BP_LaserPointer_Marker_HPP

class ABP_LaserPointer_Marker_C : public ALaserPointerMarker
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* StaticMesh3;
    class UStaticMeshComponent* StaticMesh2;
    class UStaticMeshComponent* StaticMesh1;
    class UStaticMeshComponent* StaticMesh;
    class UActorTrackingComponent* ActorTracking;
    class UStaticMeshComponent* Sphere;
    class USceneComponent* DefaultSceneRoot;
    class UOutlineComponent* outline;
    class UHealthComponentBase* HealthComponent;

    void UpdateMaterial();
    void ReceiveBeginPlay();
    void OnDestroyed_Target(class AActor* DestroyedActor);
    void OnDestroyed_Self(class AActor* DestroyedActor);
    void OnDeath_Event(class UHealthComponentBase* HealthComponent);
    void ExecuteUbergraph_BP_LaserPointer_Marker(int32 EntryPoint);
};

#endif
