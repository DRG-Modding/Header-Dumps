#ifndef UE4SS_SDK_TOOLTIP_Season_DisableContent_HPP
#define UE4SS_SDK_TOOLTIP_Season_DisableContent_HPP

class UTOOLTIP_Season_DisableContent_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* Background;
    class UOverlay* DisabledOverlay;
    class UOverlay* EnabledOverlay;
    class UImage* Image_Outline;
    class UWidgetSwitcher* StateSwitcher;

    void Refresh();
    void ExecuteUbergraph_TOOLTIP_Season_DisableContent(int32 EntryPoint);
};

#endif
