#ifndef UE4SS_SDK_ITM_DeepDiveHeader_HPP
#define UE4SS_SDK_ITM_DeepDiveHeader_HPP

class UITM_DeepDiveHeader_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Image_188;
    class UImage* Image_304;
    class UITM_DeepDiveHeaderElite_C* ITM_DeepDiveHeaderElite;
    class UShadowBG_C* ShadowBG;
    class USizeBox* SizeBox_0;
    class UTextBlock* TXT_DeepDive_BG;
    class UTextBlock* TXT_DeepDive_Front;
    FText Header Contents;
    bool EliteActive;

    void FromActiveDeepDive();
    void FromDeepDive(class UDeepDive* InDeepDive);
    void SetEliteActive(bool EliteActive);
    void SetHeaderContents(FText Header Contents);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_DeepDiveHeader(int32 EntryPoint);
};

#endif
