#ifndef UE4SS_SDK_UI_InfirmaryStats_Item_HPP
#define UE4SS_SDK_UI_InfirmaryStats_Item_HPP

class UUI_InfirmaryStats_Item_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Icon;
    class UBorder* LineBorder;
    class UTextBlock* TitleText;
    class UTextBlock* TotalText;
    class UMissionStat* Mission Stat;
    bool IsSelected;
    FUI_InfirmaryStats_Item_COnHoverBegin OnHoverBegin;
    void OnHoverBegin(class UUI_MissionStats_Item_C* Sender);
    FUI_InfirmaryStats_Item_COnHoverEnd OnHoverEnd;
    void OnHoverEnd(class UUI_MissionStats_Item_C* Sender);
    class UTexture2D* CategoryIcon;
    class AFSDPlayerState* Player State;

    bool OwnedByLocal(bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_IsValid_ReturnValue);
    class AFSDPlayerController* GetPlayer(class AActor* CallFunc_GetOwner_ReturnValue, class AFSDPlayerController* K2Node_DynamicCast_AsFSDPlayer_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class AFSDPlayerController* CallFunc_GetPlayerController_ReturnValue);
    void SetCategoryFilter(TArray<class UTexture2D*>& Filter, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UTexture2D* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue);
    void GetMissionStat(class UMissionStat*& Mission Stat);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void Set Selected(bool Selected);
    void MissonStatUpdate(class UMissionStat* MissionStat, FText StatValue);
    void ExecuteUbergraph_UI_InfirmaryStats_Item(int32 EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable_1, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable_1, FExecuteUbergraph_UI_InfirmaryStats_ItemK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime, FText CallFunc_TextToUpper_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor, FLinearColor CallFunc_MenuColors_OutputColor_1, bool K2Node_CustomEvent_Selected, class UTexture2D* CallFunc_GetIcon_ReturnValue, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable_2, TEnumAsByte<ENUM_MenuColors::Type> K2Node_Select_Default, FLinearColor CallFunc_MenuColors_OutputColor_2, class UMissionStat* K2Node_CustomEvent_MissionStat, FText K2Node_CustomEvent_StatValue, FSlateColor K2Node_MakeStruct_SlateColor_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class ABP_PlayerState_SpaceRig_C* K2Node_DynamicCast_AsBP_Player_State_Space_Rig, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasAuthority_ReturnValue, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable_3, FText CallFunc_GetMissionStatValue_StatValue, bool CallFunc_GetMissionStatValue_Valid, TEnumAsByte<ENUM_MenuColors::Type> K2Node_Select_Default_1, FLinearColor CallFunc_MenuColors_OutputColor_3);
    void OnHoverEnd__DelegateSignature(class UUI_MissionStats_Item_C* Sender);
    void OnHoverBegin__DelegateSignature(class UUI_MissionStats_Item_C* Sender);
};

#endif
