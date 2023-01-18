#ifndef UE4SS_SDK_BP_MemorialScreenSpeedButton_HPP
#define UE4SS_SDK_BP_MemorialScreenSpeedButton_HPP

class ABP_MemorialScreenSpeedButton_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* StaticMesh2;
    class UPointLightComponent* PointLight;
    class USphereComponent* UseSphere;
    class USingleUsableComponent* SingleUsable;
    class UStaticMeshComponent* StaticMesh1;
    class USceneComponent* DefaultSceneRoot;
    float SearchRange;
    TArray<class ABP_MemorialWall_C*> MyMemorialWalls;
    bool IsFast;

    void OnRep_IsFast();
    void ReceiveBeginPlay();
    void OnMatchStarted_Event_0();
    void BndEvt__SingleUsable_K2Node_ComponentBoundEvent_2_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void ExecuteUbergraph_BP_MemorialScreenSpeedButton(int32 EntryPoint);
};

#endif
