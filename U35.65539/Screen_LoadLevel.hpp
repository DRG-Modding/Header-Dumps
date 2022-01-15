#ifndef UE4SS_SDK_Screen_LoadLevel_HPP
#define UE4SS_SDK_Screen_LoadLevel_HPP

class UScreen_LoadLevel_C : UScreen_BaseLoadLevel_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UAnimatedStaticOverlay_C* AnimatedStaticOverlay_76;
    UBorder* Border_0;
    UBorder* Border_3;
    UHUD_Chat_C* HUD_Chat_1;
    UHorizontalBox* PlayerBox;
    URetainerBox* RetainerBox_0;
    URetainerBox* RetainerBox_1;
    URetainerBox* RetainerBox_2;
    UTextBlock* TextBlock_Complexity;
    UTextBlock* TextBlock_Duration;
    UTextBlock* TextBlock_Glocal_Seed;
    UTextBlock* TextBlock_Mission_Seed;
    UTextBlock* TextBlock_PLS_Seed;
    UHorizontalBox* TopHorizontalBox;
    UUI_LoadingTips_C* UI_LoadingTips;
    UWND_MissionBar_C* WND_MissionBar;
    bool HeroIseSet;
    bool ClassSelectionIsHidden;
    bool PlayerReadyBoxAlreadyShown;

    void SetSeed(UTextBlock* Widget, int32 Value, FText CallFunc_Conv_IntToText_ReturnValue);
    void AllPlayersHaveDifferentClass(bool& AllClassesUniuqe, TArray<UPlayerCharacterID*> CharacterIds, bool DualClass, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, UGameStateBase* CallFunc_GetGameState_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, UPlayerState* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, UFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State, bool K2Node_DynamicCast_bSuccess, UPlayerCharacterID* CallFunc_GetSelectedCharacterID_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Array_Contains_ReturnValue);
    void RemovePlayer(UFSDPlayerState* PlayerState, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Variable, bool CallFunc_RemoveChildAt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, UPlayerReadyBox_C* K2Node_DynamicCast_AsPlayer_Ready_Box, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void AreAllPlayersReady(bool& Result, bool AllReady, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, UPlayerReadyBox_C* K2Node_DynamicCast_AsPlayer_Ready_Box, bool K2Node_DynamicCast_bSuccess, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void AddPlayer(UFSDPlayerState* PlayerState, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, TArray<UWidget*>& CallFunc_GetAllChildren_ReturnValue, UWidget* CallFunc_Array_Get_Item, UPlayerReadyBox_C* K2Node_DynamicCast_AsPlayer_Ready_Box, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UPlayerReadyBox_C* CallFunc_Create_ReturnValue, UPanelSlot* CallFunc_AddChild_ReturnValue);
    void Destruct();
    void PlayerLeft(UFSDPlayerState* PlayerState);
    void PlayerJoined(UFSDPlayerState* PlayerState);
    void Construct();
    void StartLoadSeq();
    void ExecuteUbergraph_Screen_LoadLevel(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue_1, UFSDPlayerState* K2Node_CustomEvent_PlayerState_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, UFSDPlayerState* K2Node_CustomEvent_PlayerState, PlayerDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Array_Index_Variable, PlayerDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, UPlayerState* CallFunc_Array_Get_Item, UFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State, bool K2Node_DynamicCast_bSuccess, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue_2, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
}

#endif
