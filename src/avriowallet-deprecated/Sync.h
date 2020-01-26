// Copyright (c) 2018-2019, The TurtleCoin Developers
//
// Please see the included LICENSE file for more information.

#pragma once

#include <avriowallet-deprecated/Types.h>

void syncWallet(CryptoNote::INode &node, std::shared_ptr<WalletInfo> walletInfo);

void checkForNewTransactions(std::shared_ptr<WalletInfo> walletInfo);
