#ifndef UE4SS_SDK_BP_ExpertDepositorLogic_HPP
#define UE4SS_SDK_BP_ExpertDepositorLogic_HPP

class UBP_ExpertDepositorLogic_C : public UPerkLogic
{
    FPointerToUberGraphFrame UberGraphFrame;
    int32 MollyEffectRank1;
    class AMolly* Molly;
    float MinDistance;
    int32 MollyEffectRank2;
    TSubclassOf<class UStatusEffect> StatusEffect;
    bool InRange;
    class AFSDMiningHead* MineHead;
    class AFSDRefinery* Refinery;
    class AMiningPod* DropPod;

    void CheckInRange(const class AActor* OtherActor, bool WasInRange, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue_1, class APlayerCharacter* CallFunc_GetCharacter_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, float CallFunc_GetDistanceTo_ReturnValue_2, bool CallFunc_LessEqual_FloatFloat_ReturnValue_2, float CallFunc_GetDistanceTo_ReturnValue_3, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_TryPopActiveStatusEffect_ReturnValue, bool CallFunc_TryPushActiveStatusEffect_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue_3);
    FText GetAdditionalText(int32 Rankbool Temp_bool_Variable, FText Temp_text_Variable, FText Temp_text_Variable_1, bool Temp_bool_Variable_1, FText Temp_text_Variable_2, FText Temp_text_Variable_3, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, FText K2Node_Select_Default, FText K2Node_Select_Default_1);
    void StartLogic(int32 Rank);
    void CheckMollyDistance();
    void Try start logic();
    void ExecuteUbergraph_BP_ExpertDepositorLogic(int32 EntryPoint, TArray<class AMiningPod*>& CallFunc_GetAllActorsOfClass_OutActors, bool Temp_bool_Variable, class AMiningPod* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, TSubclassOf<class UStatusEffect> Temp_class_Variable, TSubclassOf<class UStatusEffect> Temp_class_Variable_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, int32 K2Node_Event_rank, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_GreaterEqual_IntInt_ReturnValue, TSubclassOf<class UStatusEffect> K2Node_Select_Default, TArray<class AFSDMiningHead*>& CallFunc_GetAllActorsOfClass_OutActors_1, class AFSDMiningHead* CallFunc_Array_Get_Item_1, FExecuteUbergraph_BP_ExpertDepositorLogicK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, class APlayerCharacter* CallFunc_GetCharacter_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, TArray<class AFSDRefinery*>& CallFunc_GetAllActorsOfClass_OutActors_2, class AFSDRefinery* CallFunc_Array_Get_Item_2, FExecuteUbergraph_BP_ExpertDepositorLogicK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue_2);
};

#endif
