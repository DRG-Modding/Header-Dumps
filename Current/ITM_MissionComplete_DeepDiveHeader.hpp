#ifndef UE4SS_SDK_ITM_MissionComplete_DeepDiveHeader_HPP
#define UE4SS_SDK_ITM_MissionComplete_DeepDiveHeader_HPP

class UITM_MissionComplete_DeepDiveHeader_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* Data_CodeName;
    class UTextBlock* Data_Region;
    class UITM_DeepDiveHeader_C* ITM_DeepDiveHeader;
    class UTextBlock* TXT_Codename;
    class UTextBlock* TXT_Region;

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void Refresh();
    void ExecuteUbergraph_ITM_MissionComplete_DeepDiveHeader(int32 EntryPoint);
};

#endif
