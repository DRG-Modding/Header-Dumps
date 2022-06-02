#ifndef UE4SS_SDK_HUD_Itembar_HPP
#define UE4SS_SDK_HUD_Itembar_HPP

class UHUD_Itembar_C : public UItemsBar
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* FadeOut;
    class UBorder* FadeBorder;
    class UHorizontalBox* IconsParent;
    class URetainerBox* RetainerBox_0;
    bool Fading;

    void OnItemAdded(class UItemsBarIcon* ItemIcon);
    void OnClear();
    void Construct();
    void OnItemEquipped(class UItemsBarIcon* ItemIcon);
    void Show();
    void OnInputSourceChanged(EFSDInputSource InputSource);
    void OnItemClicked();
    void PreConstruct(bool IsDesignTime);
    void FadeOutFinished();
    void ExecuteUbergraph_HUD_Itembar(int32 EntryPoint);
};

#endif
