#ifndef UE4SS_SDK_ITM_FuelCannisterStatus_HPP
#define UE4SS_SDK_ITM_FuelCannisterStatus_HPP

class UITM_FuelCannisterStatus_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UProgressBar* FuelProgressBar;
    class UImage* Img_Complete;
    class UImage* Img_Outline;
    class UITM_CharacterIcon_C* ITM_CharacterIcon;
    class UWidgetSwitcher* WidgetSwitcher_0;
    float MaxLoad;
    int32 CannisterIndex;
    class AExtractorItem* extractor;
    bool Full;

    void SetProgress(float CurrentLoad);
    void Reset();
    bool ReadyForExtractor();
    void Construct();
    void OnCurrentLoadChangedEvent(float FloatValue);
    void SetExtractor(class AExtractorItem* extractor);
    void OnDestroyed(class AActor* DestroyedActor);
    void CharacterChanged(class ACharacter* Character);
    void ForceFull();
    void ExecuteUbergraph_ITM_FuelCannisterStatus(int32 EntryPoint);
};

#endif
