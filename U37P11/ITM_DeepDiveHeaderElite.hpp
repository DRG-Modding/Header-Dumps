#ifndef UE4SS_SDK_ITM_DeepDiveHeaderElite_HPP
#define UE4SS_SDK_ITM_DeepDiveHeaderElite_HPP

class UITM_DeepDiveHeaderElite_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Image_105;
    class UImage* Image_107;
    class UImage* Image_108;
    class UImage* Image_109;
    class UShadowBG_C* ShadowBG;
    class UTextBlock* TextBlock_113;
    FText EliteContents;

    void SetEliteContents(FText EliteContents);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_DeepDiveHeaderElite(int32 EntryPoint);
};

#endif
