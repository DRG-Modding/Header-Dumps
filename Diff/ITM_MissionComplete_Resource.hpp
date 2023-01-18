#ifndef UE4SS_SDK_ITM_MissionComplete_Resource_HPP
#define UE4SS_SDK_ITM_MissionComplete_Resource_HPP

class UITM_MissionComplete_Resource_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_ResourceIcon_C* Basic_ResourceIcon;
    class UTextBlock* DataDescription;
    class UTextBlock* DataValue;
    class UVerticalBox* TextVertical;
    int32 Amount;
    FText Description;
    int32 Size;

    float Scale(float OriginalSize);
    void Init With Icon(FText Description, int32 Amount, class UTexture2D* Texture);
    void PreConstruct(bool IsDesignTime);
    void Init No Anim(FText Description, int32 Amount, class UTexture2D* Texture);
    void Start Counter();
    void Init(FText Description, int32 Amount);
    void ExecuteUbergraph_ITM_MissionComplete_Resource(int32 EntryPoint);
};

#endif
