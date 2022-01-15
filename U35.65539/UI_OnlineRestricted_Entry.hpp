#ifndef UE4SS_SDK_UI_OnlineRestricted_Entry_HPP
#define UE4SS_SDK_UI_OnlineRestricted_Entry_HPP

class UUI_OnlineRestricted_Entry_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_Image_C* Basic_Image;
    UBasic_Label_C* Basic_Label;
    EBlueprintablePrivilegeResults PrivilegeResult;
    int32 FontSize;

    void SetFontSize(int32 inFontSize, float CallFunc_Multiply_IntFloat_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_OnlineRestricted_Entry(int32 EntryPoint, bool K2Node_Event_IsDesignTime, FText CallFunc_OnlinePlayBlockReasonToString_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility);
}

#endif
