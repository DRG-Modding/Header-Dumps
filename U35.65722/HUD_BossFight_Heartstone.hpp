#ifndef UE4SS_SDK_HUD_BossFight_Heartstone_HPP
#define UE4SS_SDK_HUD_BossFight_Heartstone_HPP

class UHUD_BossFight_Heartstone_C : public UHUD_BossFight_BaseEntry_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UHorizontalBox* HorizontalBox_Healthbar;
    class UImage* Image_316;
    class UImage* Image_401;
    class UITM_BossFightContainer_C* ITM_BossFightContainer;
    class UProgressBar* ProgressBar_Health_1;
    class UProgressBar* ProgressBar_Health_2;
    class UProgressBar* ProgressBar_Health_3;
    class UProgressBar* ProgressBar_Health_4;
    class AEscortDestination* Heartstone;
    class UEscortObjective* EscortObj;
    int32 CurrHealthBar;
    TArray<class UProgressBar*> HealthSegments;

    float CalcPercentage(float Progressint32& CurrStage, float nextBreak, int32 Stage, float prevBreak, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, float CallFunc_Array_Get_Item, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_2, float CallFunc_Array_Get_Item_1, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue);
    void Construct();
    void OnProgressUpdated(float Progress);
    void OnBossRemoved(const TScriptInterface<class IBossFightInterface>& BossFight);
    void DeathFinished();
    void OnShellCracked(int32 numberOfShellsCracked);
    void ExecuteUbergraph_HUD_BossFight_Heartstone(int32 EntryPoint, int32 Temp_int_Variable, FExecuteUbergraph_HUD_BossFight_HeartstoneK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Add_IntInt_ReturnValue, class UBossFightSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, class UBP_BossFight_Heartstone_C* K2Node_DynamicCast_AsBP_Boss_Fight_Heartstone, bool K2Node_DynamicCast_bSuccess, class UObjective* CallFunc_GetPrimaryObjective_ReturnValue, class UEscortObjective* K2Node_DynamicCast_AsEscort_Objective, bool K2Node_DynamicCast_bSuccess_1, float K2Node_CustomEvent_progress, float CallFunc_CalcPercentage_ReturnValue, int32 CallFunc_CalcPercentage_CurrStage, const TScriptInterface<class IBossFightInterface> K2Node_CustomEvent_BossFight, class AActor* CallFunc_GetBossActor_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, int32 K2Node_CustomEvent_numberOfShellsCracked, int32 CallFunc_Subtract_IntInt_ReturnValue, TArray<class UProgressBar*>& K2Node_MakeArray_Array, class UProgressBar* CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UProgressBar* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, FExecuteUbergraph_HUD_BossFight_HeartstoneK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, FExecuteUbergraph_HUD_BossFight_HeartstoneK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, int32 Temp_int_Variable_1, FExecuteUbergraph_HUD_BossFight_HeartstoneK2Node_CreateDelegate_OutputDelegate_3 K2Node_CreateDelegate_OutputDelegate_3, class UProgressBar* CallFunc_Array_Get_Item_2, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1);
};

#endif
