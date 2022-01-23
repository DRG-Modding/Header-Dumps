#ifndef UE4SS_SDK_Screen_LoadLevel_HPP
#define UE4SS_SDK_Screen_LoadLevel_HPP

class UScreen_LoadLevel_C : public UScreen_BaseLoadLevel_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAnimatedStaticOverlay_C* AnimatedStaticOverlay_76;
    class UBorder* Border_0;
    class UBorder* Border_3;
    class UHUD_Chat_C* HUD_Chat_1;
    class UHorizontalBox* PlayerBox;
    class URetainerBox* RetainerBox_0;
    class URetainerBox* RetainerBox_1;
    class URetainerBox* RetainerBox_2;
    class UTextBlock* TextBlock_Complexity;
    class UTextBlock* TextBlock_Duration;
    class UTextBlock* TextBlock_Glocal_Seed;
    class UTextBlock* TextBlock_Mission_Seed;
    class UTextBlock* TextBlock_PLS_Seed;
    class UHorizontalBox* TopHorizontalBox;
    class UUI_LoadingTips_C* UI_LoadingTips;
    class UWND_MissionBar_C* WND_MissionBar;
    bool HeroIseSet;
    bool ClassSelectionIsHidden;
    bool PlayerReadyBoxAlreadyShown;

    void SetSeed(class UTextBlock* Widget, int32 Value, FText CallFunc_Conv_IntToText_ReturnValue);
    void AllPlayersHaveDifferentClass(bool& AllClassesUniuqe, TArray<class UPlayerCharacterID*> CharacterIds, bool DualClass, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class APlayerState* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class AFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State, bool K2Node_DynamicCast_bSuccess, class UPlayerCharacterID* CallFunc_GetSelectedCharacterID_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Array_Contains_ReturnValue);
    void RemovePlayer(class AFSDPlayerState* PlayerState, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Variable, bool CallFunc_RemoveChildAt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, class UPlayerReadyBox_C* K2Node_DynamicCast_AsPlayer_Ready_Box, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void AreAllPlayersReady(bool& Result, bool AllReady, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class UPlayerReadyBox_C* K2Node_DynamicCast_AsPlayer_Ready_Box, bool K2Node_DynamicCast_bSuccess, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void AddPlayer(class AFSDPlayerState* PlayerState, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, class UPlayerReadyBox_C* K2Node_DynamicCast_AsPlayer_Ready_Box, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UPlayerReadyBox_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue);
    void Destruct();
    void PlayerLeft(class AFSDPlayerState* PlayerState);
    void PlayerJoined(class AFSDPlayerState* PlayerState);
    void Construct();
    void StartLoadSeq();
    void ExecuteUbergraph_Screen_LoadLevel(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue_1, class AFSDPlayerState* K2Node_CustomEvent_PlayerState_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class AFSDPlayerState* K2Node_CustomEvent_PlayerState, FExecuteUbergraph_Screen_LoadLevelK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Array_Index_Variable, FExecuteUbergraph_Screen_LoadLevelK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, class APlayerState* CallFunc_Array_Get_Item, class AFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State, bool K2Node_DynamicCast_bSuccess, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue_2, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
};

#endif
