#ifndef UE4SS_SDK_Lore_List_Header_HPP
#define UE4SS_SDK_Lore_List_Header_HPP

class ULore_List_Header_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* TextBlock_Headline;

    void SetText(FText Headline);
    void ExecuteUbergraph_Lore_List_Header(int32 EntryPoint);
};

#endif
