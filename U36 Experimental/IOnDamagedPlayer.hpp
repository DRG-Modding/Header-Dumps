#ifndef UE4SS_SDK_IOnDamagedPlayer_HPP
#define UE4SS_SDK_IOnDamagedPlayer_HPP

class IIOnDamagedPlayer_C : public IInterface
{

    void OnDamagedPlayer(class APlayerCharacter* Player, float Amount);
};

#endif
