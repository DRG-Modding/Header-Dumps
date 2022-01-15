#ifndef UE4SS_SDK_UI_Forge_Details_HPP
#define UE4SS_SDK_UI_Forge_Details_HPP

class UUI_Forge_Details_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* AnimCount;
    UWidgetAnimation* AnimOpenMatrix;
    UBorder* CounterBorder;
    UOverlay* CounterOverlay;
    UBasic_Label_C* CountLabel;
    UTextBlock* DescriptionSubTitle;
    UTextBlock* DescriptionTitle;
    UTextBlock* ForgeItemCategory;
    UTextBlock* ForgeItemDesc;
    UTextBlock* ForgeItemName;
    UOverlay* ItemDescriptionOverlay;
    UITM_CharacterIcon_C* ITM_CharacterIcon;
    UITM_MatrixCore_C* ITM_MatrixCore;
    UITM_Overclock_Details_C* ITM_Overclock_Details;
    UITM_Overclock_Icon_C* ITM_Overclock_Icon;
    UBorder* LowerBarBorder;
    UUI_Forge_Schematic_OwnerIcon_C* UI_SchematicOwnerIcon;
    UBorder* UpperBarBorder;
    UImage* UpperBarCorner;
    UOverlay* WeaponIcon;
    FUI_Forge_Details_COnMatrixCoreOpened OnMatrixCoreOpened;
    void OnMatrixCoreOpened();
    bool ShowMatrixCore;
    int32 CountingTo;
    float CountProgress;

    void SequenceEvent__ENTRYPOINTUI_Forge_Details_0();
    void StartCounting(bool CallFunc_Not_PreBool_ReturnValue, FLinearColor CallFunc_GetFrameLinearColor_ColorAndOpacity, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void SetCountProgress(float InValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Lerp_ReturnValue, int32 CallFunc_Round_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue);
    void OpenMatrixCore(UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void SetItemDescription(FText Title, FText Subtitle, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility);
    void ShowSchematic(USchematic* InSchematic, bool ShowSchematicDetails, FText SchematicDescription, FText SchematicName, USchematicItem* Item, UOverclockShematicItem* OverclockItem, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, FText CallFunc_TextToUpper_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, UPlayerCharacter* CallFunc_GetCharacter_ReturnValue, const FText CallFunc_GetHeroName_ReturnValue, USkinSchematicItem* K2Node_DynamicCast_AsSkin_Schematic_Item, bool K2Node_DynamicCast_bSuccess, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue, ESlateVisibility K2Node_Select_Default, bool CallFunc_IsVisible_ReturnValue, ESlateVisibility K2Node_Select_Default_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, bool CallFunc_SelectVisibility_IsVisible_1, bool CallFunc_SelectVisibility_VisibilityChanged_1, ESlateVisibility CallFunc_SelectVisibility_New_Visibility_1, FText CallFunc_TextToUpper_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_SelectVisibility_IsVisible_2, bool CallFunc_SelectVisibility_VisibilityChanged_2, ESlateVisibility CallFunc_SelectVisibility_New_Visibility_2, UResourceSchematicItem* K2Node_DynamicCast_AsResource_Schematic_Item, bool K2Node_DynamicCast_bSuccess_1, UOverclockShematicItem* K2Node_DynamicCast_AsOverclock_Shematic_Item, bool K2Node_DynamicCast_bSuccess_2, UPlayerCharacter* CallFunc_GetCharacter_ReturnValue_1, UUpgradableGearComponent* CallFunc_GetOwningGearComponent_ReturnValue, const FText CallFunc_GetHeroName_ReturnValue_1, FText CallFunc_GetGearName_ReturnValue, USchematicItem* CallFunc_GetSchematicItem_ReturnValue, FText CallFunc_GetDescription_ReturnValue, FText CallFunc_GetTitle_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void AnimOpenMatrixFinished();
    void Stop Counting();
    void ExecuteUbergraph_UI_Forge_Details(int32 EntryPoint, WidgetAnimationDynamicEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1, FLinearColor CallFunc_MenuColors_OutputColor_2, bool CallFunc_IsAnimationPlaying_ReturnValue);
    void OnMatrixCoreOpened__DelegateSignature();
}

#endif
