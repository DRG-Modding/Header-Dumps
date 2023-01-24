#ifndef UE4SS_SDK_BP_SteelDrum_HPP
#define UE4SS_SDK_BP_SteelDrum_HPP

class ABP_SteelDrum_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USphereComponent* Sphere11;
    class USphereComponent* Sphere10;
    class UInstantUsable* Note11;
    class UInstantUsable* Note10;
    class UInstantUsable* Note9;
    class UInstantUsable* Note8;
    class UInstantUsable* Note7;
    class UCapsuleComponent* Capsule9;
    class UCapsuleComponent* Capsule8;
    class UCapsuleComponent* Capsule7;
    class UCapsuleComponent* Capsule6;
    class USceneComponent* Scene;
    class UCapsuleComponent* Capsule5;
    class UCapsuleComponent* Capsule4;
    class UCapsuleComponent* Capsule3;
    class UCapsuleComponent* Capsule2;
    class UCapsuleComponent* Capsule1;
    class UCapsuleComponent* Capsule;
    class UInstantUsable* Note6;
    class UInstantUsable* Note5;
    class UInstantUsable* Note4;
    class UInstantUsable* Note3;
    class UInstantUsable* Note2;
    class UInstantUsable* Note1;
    class UInstantUsable* Note;
    class UStaticMeshComponent* StaticMesh;
    class USceneComponent* DefaultSceneRoot;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_SteelDrum(int32 EntryPoint);
};

#endif
