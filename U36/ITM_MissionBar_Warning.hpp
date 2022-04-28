#ifndef UE4SS_SDK_ITM_MissionBar_Warning_HPP
#define UE4SS_SDK_ITM_MissionBar_Warning_HPP

class UITM_MissionBar_Warning_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Blink;
    class UTextBlock* DATA_Warning;
    class UImage* GradientBG;
    class UImage* IconMutator;
    class UImage* IconWarning;
    bool Is Mutator;

    void Update(FText Title, class UTexture2D* Icon, TEnumAsByte<ENUM_MenuColors::Type> Color);
    void PreConstruct(bool IsDesignTime);
    void SetWarning(class UMissionWarning* Warning);
    void SetMutator(class UMissionMutator* Mutator);
    void ExecuteUbergraph_ITM_MissionBar_Warning(int32 EntryPoint);
};

#endif
