#ifndef UE4SS_SDK_ITM_CharacterIcon_HPP
#define UE4SS_SDK_ITM_CharacterIcon_HPP

class UITM_CharacterIcon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Border_CharacterColor;
    class UImage* Border_CharacterColorBG;
    class UImage* Border_Outer;
    class UUI_MaskedImage_C* Icon_Character;
    class UITM_HostIcon_C* Icon_Host;
    class UITM_RetirementBadge_C* Icon_Promotion;
    class UITM_SonyTeamLeader_C* Icon_SonyTeamLeader;
    class USizeBox* SizeBox_0;
    class UPlayerCharacterID* Character;
    bool ShowPromotion;
    bool ShowHost;
    float Base Icon Size;
    bool ShowSessionLeader;

    void SetShowSonySessionLeader(bool Index);
    void SetFromCharacterID(class UPlayerCharacterID* characterID);
    void SetFromCharacterClass(class UPlayerCharacterID* InCharacterClass);
    void SetFromPlayerCharacter(class APlayerCharacter* Character);
    void SetFromPlayerState(class APlayerState* InState);
    void SetBaseSize(float Size);
    void SetShowPromotion(bool Index);
    void SetImage(class UTexture2D* Value, FLinearColor InColorAndOpacity);
    void SetCharacterImageAndColor(class UPlayerCharacterID* Character);
    void SetShowHostIcon(bool Index);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_CharacterIcon(int32 EntryPoint);
};

#endif
