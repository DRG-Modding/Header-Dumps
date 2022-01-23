#ifndef UE4SS_SDK_ITM_MisSel_MissionCount_HPP
#define UE4SS_SDK_ITM_MisSel_MissionCount_HPP

class UITM_MisSel_MissionCount_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* DATAMissionCount;
    class UImage* Image_0;
    TArray<class UGeneratedMission*> missions;

    void SetMissionCount(TArray<class UGeneratedMission*>& missions, TArray<FBlueprintSessionResult>& SeachResults, int32 SessionCount, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class UGeneratedMission* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Variable, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, FBlueprintSessionResult CallFunc_Array_Get_Item_1, bool CallFunc_FSDIsPrivateServer_ReturnValue, int32 CallFunc_FSDGetGlobalMissionSeed_ReturnValue, int32 CallFunc_FSDGetMissionSeed_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, int32 CallFunc_GetGlobalMissionSeed_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ServerUpdate();
    void ExecuteUbergraph_ITM_MisSel_MissionCount(int32 EntryPoint, FExecuteUbergraph_ITM_MisSel_MissionCountK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ABP_GameState_SpaceRig_C* K2Node_DynamicCast_AsBP_Game_State_Space_Rig, bool K2Node_DynamicCast_bSuccess, class AGameStateBase* CallFunc_GetGameState_ReturnValue_1, class ABP_GameState_SpaceRig_C* K2Node_DynamicCast_AsBP_Game_State_Space_Rig_1, bool K2Node_DynamicCast_bSuccess_1);
};

#endif
