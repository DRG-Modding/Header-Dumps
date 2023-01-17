#ifndef UE4SS_SDK_BP_BoscoStateDisplay_HPP
#define UE4SS_SDK_BP_BoscoStateDisplay_HPP

class ABP_BoscoStateDisplay_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* BackPlane;
    class UStaticMeshComponent* FrontPlane;
    class UStaticMeshComponent* Plane;
    class USceneComponent* DefaultSceneRoot;
    class UMaterialInstance* MiningMaterial;
    class UMaterialInstance* FightingMaterial;
    class UMaterialInstance* LightingMaterial;
    class UMaterialInstance* RepairingMaterial;
    class UMaterialInstance* FollowTargetMaterial;
    class UMaterialInstance* RevivingMaterial;
    class UMaterialInstance* CleaningMaterial;

    void SetMaterial(class UMaterialInstance* NewParam);
    void SetState(EDroneAIState State);
    void ReceiveBeginPlay();
    void FollowTargetChanged(class AActor* FollowTarget);
    void SetupFollowtargetDelegate(class ABoscoController* NewParam);
    void ExecuteUbergraph_BP_BoscoStateDisplay(int32 EntryPoint);
};

#endif
