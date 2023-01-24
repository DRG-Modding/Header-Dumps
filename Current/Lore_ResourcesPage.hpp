#ifndef UE4SS_SDK_Lore_ResourcesPage_HPP
#define UE4SS_SDK_Lore_ResourcesPage_HPP

class ULore_ResourcesPage_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Window_CutCorner_C* Basic_Window_CutCorner;
    class UBasic_Window_CutCorner_C* Basic_Window_CutCorner_84;
    class UImage* IconBig;
    class ULore_Resources_Content_Frame_C* Lore_Resources_Content_Frame;
    class ULore_Resources_Content_Frame_C* Lore_Resources_Content_Frame_98;
    class ULore_Resources_Content_Frame_C* Lore_Resources_Content_Frame_293;
    class ULore_Resources_Content_Frame_C* Lore_Resources_Content_Frame_585;
    class ULore_Resources_Content_Frame_C* Lore_Resources_Content_Frame_656;
    class ULore_Resources_Content_Frame_C* Lore_Resources_Content_Frame_702;
    class ULore_Resources_Content_Frame_C* Lore_Resources_Content_Frame_887;
    class ULore_Resources_Content_Frame_C* Lore_Resources_Content_Frame_1160;
    class ULore_Resources_Content_Frame_C* Lore_Resources_Content_Frame_C_0;
    class ULore_Resources_Content_Frame_C* Lore_Resources_Content_Frame_C_1;
    class ULore_Resources_Content_Frame_C* Lore_Resources_Content_Frame_C_2;
    class ULore_Resources_Content_Frame_C* Lore_Resources_Content_Frame_C_1162;
    class ULore_Resources_Content_ResourceInfo_C* Lore_Resources_Content_ResourceInfo;
    class UUniformGridPanel* ResourceHolder;
    class UTextBlock* Text_CategoryDescription;
    class UTextBlock* Text_ResourceDescription;
    class UTextBlock* Text_ResourceName;
    class ULore_Resources_Content_Frame_C* SelectedButton;
    int32 NumberOfColumns;

    void SetData(const FText CategoryDescription, const TArray<FMM_ResourceInfo>& Resources);
    void OnResourceClicked(class ULore_Resources_Content_Frame_C* Button, FMM_ResourceInfo Resource);
    void ExecuteUbergraph_Lore_ResourcesPage(int32 EntryPoint);
};

#endif
