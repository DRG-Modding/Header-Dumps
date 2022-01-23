#ifndef UE4SS_SDK_ITM_Pipeline_BrokenIcon_HPP
#define UE4SS_SDK_ITM_Pipeline_BrokenIcon_HPP

class UITM_Pipeline_BrokenIcon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimActive;
    class USizeBox* ImageSizer;
    int32 Size;
    bool IconActive;

    void SetIconActive(bool Inactive, bool CallFunc_IsVisible_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, bool CallFunc_BooleanAND_ReturnValue);
    void SetSize(int32 InSize, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_Pipeline_BrokenIcon(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

#endif
