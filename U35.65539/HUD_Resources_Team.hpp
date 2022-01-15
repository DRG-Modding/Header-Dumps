#ifndef UE4SS_SDK_HUD_Resources_Team_HPP
#define UE4SS_SDK_HUD_Resources_Team_HPP

class UHUD_Resources_Team_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* Transition;
    UBasic_HUD_BracketWindowBig_Single_C* Basic_HUD_BracketWindowBig_Single;
    UVerticalBox* IconParentBottom;
    UVerticalBox* IconParentTop;
    UBorder* SplitterBar;
    UTextBlock* TEXT_Empty;
    UTextBlock* TEXT_Header;
    APlayerCharacter* Character;
    UResourcesComponent* ResourceComponent;
    bool DoIntroAnim;
    int32 WidgetHideLock;
    bool Pinging;

    void IsObjectiveResource(UCappedResource* InResource, bool& IsObjective, UCappedResource*& OutResource, TArray<UObjective*> Objectives, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, UObjective* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsObjectiveResource_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, const TArray<UObjective*>& CallFunc_GetObjectives_ReturnValue);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void Add Resource(UCappedResource* Resource);
    void Show Widget();
    void Hide Widget();
    void Ping Widget();
    void OnTransitionFinished();
    void OnDepositingEnd_Event(UResourceBank* ResourceBank);
    void OnDepositingBegin_Event(UResourceBank* ResourceBank);
    void OnResourceChanged_Event(UCappedResource* Resource, float Amount);
    void OnResourceAdded(UCappedResource* Resource);
    void OnToggleOutline_Event(bool Visible);
    void ExecuteUbergraph_HUD_Resources_Team(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, ESlateVisibility Temp_byte_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_HasObjectivesReplicated_ReturnValue, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool K2Node_Event_IsDesignTime, APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, UCappedResource* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, UCappedResource* K2Node_CustomEvent_Resource_2, bool CallFunc_IsObjectiveResource_IsObjective, UCappedResource* CallFunc_IsObjectiveResource_OutResource, bool Temp_bool_Variable, bool CallFunc_IsCraftingResource_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UHUD_Resources_Team_Icon_C* CallFunc_Create_ReturnValue, ToggleOutlineSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue_1, ResourceAdded__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, int32 CallFunc_Add_IntInt_ReturnValue_1, float CallFunc_GetAnimationCurrentTime_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, ResourceChangedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, float CallFunc_GetAnimationCurrentTime_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, DepositingEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_HasAnyChildren_ReturnValue, ESlateVisibility K2Node_Select_Default, FLinearColor CallFunc_MenuColors_OutputColor, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, FLinearColor CallFunc_MenuColors_OutputColor_1, DepositingEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, FSlateColor K2Node_MakeStruct_SlateColor, bool CallFunc_GetIsDepositing_ReturnValue, WidgetAnimationDynamicEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_5, int32 Temp_int_Variable_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, UResourceBank* K2Node_CustomEvent_ResourceBank_1, UResourceBank* K2Node_CustomEvent_ResourceBank, bool Temp_bool_Variable_1, UVerticalBox* K2Node_Select_Default_1, UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, UCappedResource* K2Node_CustomEvent_Resource_1, float K2Node_CustomEvent_Amount, bool CallFunc_GetIsDepositing_ReturnValue_1, UCappedResource* K2Node_CustomEvent_Resource, bool K2Node_CustomEvent_Visible);
}

#endif
