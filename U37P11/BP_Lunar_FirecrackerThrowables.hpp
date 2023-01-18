#ifndef UE4SS_SDK_BP_Lunar_FirecrackerThrowables_HPP
#define UE4SS_SDK_BP_Lunar_FirecrackerThrowables_HPP

class ABP_Lunar_FirecrackerThrowables_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UInstantUsable* InstantUsable;
    class USphereComponent* UsableCollision;
    class UNiagaraComponent* NS_Lunar_Sparks2;
    class UNiagaraComponent* NS_Lunar_Sparks1;
    class UNiagaraComponent* NS_Lunar_Sparks;
    class UStaticMeshComponent* SM_LunarFestival_Firecracker4;
    class UStaticMeshComponent* SM_LunarFestival_Firecracker;
    class UStaticMeshComponent* SM_LunarFestival_FirecrackerSmall1;
    class UStaticMeshComponent* SM_LunarFestival_Firecracker3;
    class UStaticMeshComponent* SM_LunarFestival_Firecracker2;
    class UStaticMeshComponent* SM_LunarFestival_Firecracker1;
    class UStaticMeshComponent* SM_LunarFestival_FirecrackerSmall;
    class USceneComponent* Meshes;
    class USceneComponent* DefaultSceneRoot;
    int32 AmountLit;
    class UNiagaraComponent* Selected;

    void OnRep_AmountLit();
    void ReceiveBeginPlay();
    void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void ExecuteUbergraph_BP_Lunar_FirecrackerThrowables(int32 EntryPoint);
};

#endif
