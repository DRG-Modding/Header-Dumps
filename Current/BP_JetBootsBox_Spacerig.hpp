#ifndef UE4SS_SDK_BP_JetBootsBox_Spacerig_HPP
#define UE4SS_SDK_BP_JetBootsBox_Spacerig_HPP

class ABP_JetBootsBox_Spacerig_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPointLightComponent* PointLight1;
    class UStaticMeshComponent* FrontPlane;
    class UStaticMeshComponent* BackPlane;
    class UStaticMeshComponent* StaticMesh;
    class USkeletalMeshComponent* SkeletalMesh;
    class UPointLightComponent* PointLight;
    class USingleUsableComponent* EquipUsable;
    class UBoxComponent* UseBox;
    class UBoxComponent* Box;
    class UAudioComponent* ChestIdle_Cue;
    class UAudioComponent* IdleSound;
    TArray<int32> LightsOrder;
    class UTimelineComponent* Sphere Timeline;
    TArray<class APlayerCharacter*> HasEquipped;

    void OnRep_HasEquipped();
    void UserConstructionScript();
    void BndEvt__BP_JetBootsBox_EquipUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void ReceiveOnRepEquipped();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_JetBootsBox_Spacerig(int32 EntryPoint);
};

#endif
