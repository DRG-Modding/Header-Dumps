#ifndef UE4SS_SDK_Basic_AnimatedNumber_HPP
#define UE4SS_SDK_Basic_AnimatedNumber_HPP

class UBasic_AnimatedNumber_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* Text_Number;
    FSlateFontInfo Font;
    float Number;
    int32 FractionalDigits;
    class USoundCue* CountSound;
    float StartTime;
    FTimerHandle TimerHandle;
    float OldNumber;
    bool PlaySount;
    float TempCountNumber;
    float CountAnimTime;

    void CountUp();
    void PreConstruct(bool IsDesignTime);
    void SetNumber(float Number, bool DoCountAnim, bool PlayCountSound);
    void ExecuteUbergraph_Basic_AnimatedNumber(int32 EntryPoint);
};

#endif
