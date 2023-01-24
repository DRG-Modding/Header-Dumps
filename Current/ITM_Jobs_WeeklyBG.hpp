#ifndef UE4SS_SDK_ITM_Jobs_WeeklyBG_HPP
#define UE4SS_SDK_ITM_Jobs_WeeklyBG_HPP

class UITM_Jobs_WeeklyBG_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* ImageL;
    class UImage* ImageM;
    class UImage* ImageR;
    class USizeBox* SizeBoxL;
    class USizeBox* SizeBoxM;
    class USizeBox* SizeBoxR;
    float Size;

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_Jobs_WeeklyBG(int32 EntryPoint);
};

#endif
