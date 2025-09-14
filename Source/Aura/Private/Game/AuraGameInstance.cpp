


#include "Game/AuraGameInstance.h"

void UAuraGameInstance::Init()
{
	Super::Init();

	UE_LOG(LogTemp, Warning, TEXT("GameInstance Init - SlotName: %s, SlotIndex: %d"), 
		*LoadSlotName, LoadSlotIndex);
}
