#ifndef UE4SS_SDK_ITM_MissionComplete_ResourceBox_HPP
#define UE4SS_SDK_ITM_MissionComplete_ResourceBox_HPP

class UITM_MissionComplete_ResourceBox_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UVerticalBox* BarleyBox;
    class UVerticalBox* LinesBox;
    float ItemDelay;
    class USoundBase* Item Sound;
    FITM_MissionComplete_ResourceBox_CFinished Finished;
    void Finished();
    int32 NextIndex;
    int32 PreviewCount;
    TArray<class UITM_MissionComplete_Resource_C*> ResourceWidgets;
    int32 MaxIconsPerRow;
    FMargin IconPadding;
    int32 IconSize;
    bool Counting;
    class UAudioComponent* AudioComponent;

    void IsBarleyResource(class UResourceData* InResource, bool& OutIsBarley);
    void ClearIcons();
    void GetOrCreateHorizontalBar(bool ForceNewLine, class UHorizontalBox*& OutHorizontal);
    void AddIcon(bool ForceNewLine, float SizeScale, class UITM_MissionComplete_Resource_C*& OutIconWidget);
    void CreateIcons(TArray<class UITM_MissionComplete_Resource_C*>& OutWidgets);
    void Show(float DelayBetweenItems, class USoundBase* ItemSound);
    void Add Line(FText Description, int32 Amount, class UTexture2D* Texture);
    void PreConstruct(bool IsDesignTime);
    void Show Custom(TMap<UResourceData*, float> ResourceMap);
    void Add Line No Anim(FText Description, int32 Amount, class UTexture2D* Texture);
    void Start Counting Audio(class USoundBase* Item Sound);
    void Stop Counting Audio(float FadeDuration);
    void OnAudioFinished_Event();
    void ExecuteUbergraph_ITM_MissionComplete_ResourceBox(int32 EntryPoint);
    void Finished__DelegateSignature();
};

#endif
