#ifndef UE4SS_SDK_UI_InfirmaryStats_Item_HPP
#define UE4SS_SDK_UI_InfirmaryStats_Item_HPP

class UUI_InfirmaryStats_Item_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* Icon;
    UBorder* LineBorder;
    UTextBlock* TitleText;
    UTextBlock* TotalText;
    UMissionStat* Mission Stat;
    bool IsSelected;
    FUI_InfirmaryStats_Item_COnHoverBegin OnHoverBegin;
    void OnHoverBegin(UUI_MissionStats_Item_C* Sender);
    FUI_InfirmaryStats_Item_COnHoverEnd OnHoverEnd;
    void OnHoverEnd(UUI_MissionStats_Item_C* Sender);
    UTexture2D* CategoryIcon;
    AFSDPlayerState* Player State;

    bool OwnedByLocal(bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_IsValid_ReturnValue);
    AFSDPlayerController* GetPlayer(AActor* CallFunc_GetOwner_ReturnValue, UFSDPlayerController* K2Node_DynamicCast_AsFSDPlayer_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, UFSDPlayerController* CallFunc_GetPlayerController_ReturnValue);
    void SetCategoryFilter(TArray<UTexture2D*>& Filter, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, UTexture2D* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue);
    void GetMissionStat(UMissionStat*& Mission Stat);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void Set Selected(bool Selected);
    void MissonStatUpdate(UMissionStat* MissionStat, FText StatValue);
    void ExecuteUbergraph_UI_InfirmaryStats_Item(int32 EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable_1, uint8 Temp_byte_Variable, uint8 Temp_byte_Variable_1, OnStatChange__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime, FText CallFunc_TextToUpper_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor, FLinearColor CallFunc_MenuColors_OutputColor_1, bool K2Node_CustomEvent_Selected, UTexture2D* CallFunc_GetIcon_ReturnValue, uint8 Temp_byte_Variable_2, uint8 K2Node_Select_Default, FLinearColor CallFunc_MenuColors_OutputColor_2, UMissionStat* K2Node_CustomEvent_MissionStat, FText K2Node_CustomEvent_StatValue, FSlateColor K2Node_MakeStruct_SlateColor_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, UBP_PlayerState_SpaceRig_C* K2Node_DynamicCast_AsBP_Player_State_Space_Rig, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasAuthority_ReturnValue, uint8 Temp_byte_Variable_3, FText CallFunc_GetMissionStatValue_StatValue, bool CallFunc_GetMissionStatValue_Valid, uint8 K2Node_Select_Default_1, FLinearColor CallFunc_MenuColors_OutputColor_3);
    void OnHoverEnd__DelegateSignature(UUI_MissionStats_Item_C* Sender);
    void OnHoverBegin__DelegateSignature(UUI_MissionStats_Item_C* Sender);
}

#endif
