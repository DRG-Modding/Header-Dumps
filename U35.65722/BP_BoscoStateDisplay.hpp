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

    void SetMaterial(class UMaterialInstance* NewParam);
    void SetState(EDroneAIState State, class UMaterialInstance* Temp_object_Variable, class UMaterialInstance* Temp_object_Variable_1, class UMaterialInstance* Temp_object_Variable_2, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, class UMaterialInstance* Temp_object_Variable_3, bool CallFunc_NotEqual_ObjectObject_ReturnValue, EDroneAIState Temp_byte_Variable, class UMaterialInstance* K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue);
    void ReceiveBeginPlay();
    void FollowTargetChanged(class AActor* FollowTarget);
    void SetupFollowtargetDelegate(class ABoscoController* NewParam);
    void ExecuteUbergraph_BP_BoscoStateDisplay(int32 EntryPoint, FExecuteUbergraph_BP_BoscoStateDisplayK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class AActor* K2Node_CustomEvent_followTarget, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, class ABoscoController* K2Node_CustomEvent_NewParam);
};

#endif
