#ifndef UE4SS_SDK_BP_BoscoStateDisplay_HPP
#define UE4SS_SDK_BP_BoscoStateDisplay_HPP

class ABP_BoscoStateDisplay_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UStaticMeshComponent* BackPlane;
    UStaticMeshComponent* FrontPlane;
    UStaticMeshComponent* Plane;
    USceneComponent* DefaultSceneRoot;
    UMaterialInstance* MiningMaterial;
    UMaterialInstance* FightingMaterial;
    UMaterialInstance* LightingMaterial;
    UMaterialInstance* RepairingMaterial;
    UMaterialInstance* FollowTargetMaterial;
    UMaterialInstance* RevivingMaterial;

    void SetMaterial(UMaterialInstance* NewParam);
    void SetState(EDroneAIState State, UMaterialInstance* Temp_object_Variable, UMaterialInstance* Temp_object_Variable_1, UMaterialInstance* Temp_object_Variable_2, UMaterialInterface* CallFunc_GetMaterial_ReturnValue, UMaterialInstance* Temp_object_Variable_3, bool CallFunc_NotEqual_ObjectObject_ReturnValue, EDroneAIState Temp_byte_Variable, UMaterialInstance* K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue);
    void ReceiveBeginPlay();
    void FollowTargetChanged(AActor* FollowTarget);
    void SetupFollowtargetDelegate(UBoscoController* NewParam);
    void ExecuteUbergraph_BP_BoscoStateDisplay(int32 EntryPoint, FollowTargetChanged__DelegateSignature K2Node_CreateDelegate_OutputDelegate, AActor* K2Node_CustomEvent_followTarget, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, UBoscoController* K2Node_CustomEvent_NewParam);
}

#endif
