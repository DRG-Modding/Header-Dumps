#ifndef UE4SS_SDK_WND_JobsEntryV2_HPP
#define UE4SS_SDK_WND_JobsEntryV2_HPP

class UWND_JobsEntryV2_C : public UWND_Jobs_Entry_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Assignment_Image;
    class UImage* BG;
    class UHorizontalBox* Box_CampaignItems;
    class UButton* Button_Main;
    class UImage* I_BG2;
    class UImage* I_BG2_2;
    class UImage* I_O2;
    class UITM_Prerequisites_C* ITM_Prerequisites;
    class UJobs_List_Element_BG_CutCorner_C* Jobs_List_Element_BG_CutCorner_1;
    class UImage* outline;
    class UOverlay* Overlay_Scaler;
    class UOverlay* PreReqOverlay;
    class UTextBlock* Text_AssignmentName;
    class UCampaign* Campaign;
    bool IsFolded;
    class UMaterialInstanceDynamic* DynMaterial;

    bool CanStartCampaign(class UCampaign* InCampaignbool CallFunc_IsActiveCampaign_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class AFSDPlayerController* K2Node_DynamicCast_AsFSDPlayer_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_CanStartCampaign_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    bool VisibleAndEnabled(class UWidget* Widgetbool CallFunc_IsVisible_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void SetInfo(class UTexture2D* CallFunc_GetPicture_ReturnValue);
    bool IsActiveCampaign(class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, bool CallFunc_IsActiveCampaign_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void SetData(class UCampaign* Campaign);
    void Refresh();
    void Event_Updated();
    void ExecuteUbergraph_WND_JobsEntryV2(int32 EntryPoint, ESlateVisibility Temp_byte_Variable, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_Event_IsDesignTime, bool CallFunc_IsActiveCampaign_ReturnValue, class UCampaignManager* CallFunc_GetCampaingManager_ReturnValue, class UCampaign* K2Node_Event_Campaign, class UWindowManager* CallFunc_GetWindowManager_ReturnValue, ESlateVisibility Temp_byte_Variable_1, class UWND_Assignment_Popup_C* CallFunc_OpenWindowFromClass_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1, FLinearColor CallFunc_MenuColors_OutputColor_2, bool Temp_bool_Variable, int32 CallFunc_Array_Length_ReturnValue, FExecuteUbergraph_WND_JobsEntryV2K2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Less_IntInt_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_IsActiveCampaign_ReturnValue_1, bool CallFunc_SetData_RequirementsMet, ESlateVisibility K2Node_Select_Default, class UITM_CampaignItem_SmallEmpty_C* CallFunc_Create_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor_3);
};

#endif
