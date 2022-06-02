#ifndef UE4SS_SDK_OnScreen_SentryDistance_HPP
#define UE4SS_SDK_OnScreen_SentryDistance_HPP

class UOnScreen_SentryDistance_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_HUD_BracketWindowSmall_C* BasicWindow_BracketSmall;
    class UHUD_DefaultLabel_C* Distance;
    class AActor* Target;
    class AActor* Destination;

    void Set End Points(class AActor* Target, class AActor* Destination);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void ExecuteUbergraph_OnScreen_SentryDistance(int32 EntryPoint);
};

#endif
