#ifndef UE4SS_SDK_LIB_Text_HPP
#define UE4SS_SDK_LIB_Text_HPP

class ULIB_Text_C : public UBlueprintFunctionLibrary
{

    void Select CharacterText(class APlayerCharacter* Character, FText DrillerText, FText GunnerText, FText ScoutText, FText EngineerText, FText BoscoText, FText NoneText, class UObject* __WorldContext, FText& OutText);
    void Select Character Class Text(class UPlayerCharacterID* CharacterClass, FText DrillerText, FText GunnerText, FText ScoutText, FText EngineerText, FText BoscoText, FText NoneText, class UObject* __WorldContext, FText& OutText);
    void Select Character ID Text(class UPlayerCharacterID* characterID, FText DrillerText, FText GunnerText, FText ScoutText, FText EngineerText, FText BoscoText, FText NoneText, class UObject* __WorldContext, FText& OutText);
    void GetTimeText(float Dividend, class UObject* __WorldContext, FText& Text);
    void SetTextCased(class UTextBlock*& Target, FText InText, TEnumAsByte<ENU_TextCase::Type> Text Case, class UObject* __WorldContext);
    void GetFontSize(class UTextBlock*& Label, class UObject* __WorldContext, int32& Size);
    void SetFontSize(class UTextBlock*& Label, int32 NewSize, class UObject* __WorldContext);
    void SetTextUpperCased(class UTextBlock* Target, FText InText, class UObject* __WorldContext);
    void GetDisconnectReasonCaption(EDisconnectReason DisconnectReason, class UObject* __WorldContext, FText& Text);
    void GetDisconnectReasonText(EDisconnectReason DisconnectReason, class UObject* __WorldContext, FText& Text);
};

#endif
