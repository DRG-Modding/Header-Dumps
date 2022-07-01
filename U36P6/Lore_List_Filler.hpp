#ifndef UE4SS_SDK_Lore_List_Filler_HPP
#define UE4SS_SDK_Lore_List_Filler_HPP

class ULore_List_Filler_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* FadeOutNavigationIcon;
    class UWidgetAnimation* IntroAnim;
    class USpacer* Spacer_161;
    FLore_List_Filler_COnClicked OnClicked;
    void OnClicked(int32 Index);
    float ButtonYSize;
    int32 NumberOfButtons;

    void SetSize(int32 Number Of Buttons);
    void DecrementSize();
    void ExecuteUbergraph_Lore_List_Filler(int32 EntryPoint);
    void OnClicked__DelegateSignature(int32 Index);
};

#endif
